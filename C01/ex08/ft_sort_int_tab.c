/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztokluog <ztokluog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:05:18 by ztokluog          #+#    #+#             */
/*   Updated: 2022/02/14 20:30:08 by ztokluog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int sayac;
	int temp;

	sayac = 0;
	i = 0;

		while (sayac < size -1 )
		{
				while (i < size -1)
				{
					if ( tab[i]  > tab [i + 1])
					{
					temp = tab[i + 1];
					tab[i + 1] = tab[i];
					tab[i] =  temp;
					}
					i++;
				}
				i = 0;
		sayac ++;
		}
		i = 0;
		while ( i< size)
		{
			printf("%d", tab[i]);
			i++;
		}

}

int	main()
{
	int array[7] = {1,7,4,2,0,6,5};
	ft_sort_int_tab(array,7);
   return 0;	
}
