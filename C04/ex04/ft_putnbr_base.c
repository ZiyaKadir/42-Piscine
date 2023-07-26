/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztokluog <ztokluog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:46:53 by ztokluog          #+#    #+#             */
/*   Updated: 2022/03/01 12:47:00 by ztokluog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr, char *base, int size)
{
	unsigned int	num;

	if (nbr < 0)
	{
		write(1, "-", 1);
		num = nbr * (-1);
	}
	else
	num = nbr;
	if (num >= (unsigned int) size)
	{
		ft_putnbr((num / size), base, size);
	}
	write(1, &base[num % size], 1);
}

int	ft_base_valid(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	y;

	y = 0;
	if (ft_base_valid(base) == 1)
	{
		while (base[y] != '\0')
		{
			y++;
		}
		ft_putnbr(nbr, base, y);
	}
}
