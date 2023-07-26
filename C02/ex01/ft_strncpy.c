/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztokluog <ztokluog@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:10:12 by ztokluog          #+#    #+#             */
/*   Updated: 2022/02/21 18:06:22 by ztokluog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	src_l;

	src_l = 0;
	while ((src[src_l] != '\0') && (src_l < n))
	{
		dest[src_l] = src[src_l];
		src_l++;
	}
	while (src_l < n)
	{
		dest[src_l] = '\0';
		src_l++;
	}
	return (dest);
}
