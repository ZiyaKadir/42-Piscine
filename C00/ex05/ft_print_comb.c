/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztokluog <ztokluog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:49:29 by ztokluog          #+#    #+#             */
/*   Updated: 2022/02/15 10:17:28 by ztokluog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_3(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
				c = b + 1;
			while (c <= '9')
			{
				print_3(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{	
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}	
}
