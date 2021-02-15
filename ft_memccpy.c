/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 18:18:55 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/25 18:39:42 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest1;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		if (dest1[i] == (unsigned char)c)
			return ((void *)(dest1 + i + 1));
		i++;
	}
	return (NULL);
}
