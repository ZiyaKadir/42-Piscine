/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztokluog <ztokluog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:03:25 by ztokluog          #+#    #+#             */
/*   Updated: 2022/03/01 15:08:53 by ztokluog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	eleman;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		eleman = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (eleman);
	}
	else
		return (-1);
}
