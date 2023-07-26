/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztokluog <ztokluog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:54:38 by ztokluog          #+#    #+#             */
/*   Updated: 2022/02/21 10:48:08 by ztokluog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr( int nb)
{
	char	a;

	a = 92;
	write(1, &a, 1);
	write(1, &"0123456789abcdef"[nb / 16], 1);
	write(1, &"0123456789abcdef"[nb % 16], 1);
}

char	check(char *str, int i)
{
	if (str[i] < 32)
	{
		return (1);
	}
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	trans;

	i = 0;
	while (str[i] != '\0')
	{
		if (check(str, i))
		{
			trans = str[i];
			ft_putnbr(trans);
		}
		else
		{
			write(1, &str[i], 1);
		}
	i++;
	}
}
