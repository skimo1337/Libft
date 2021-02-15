/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 18:01:55 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/23 19:59:46 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest1;
	const char	*src1;

	i = 0;
	src1 = (const char *)src;
	dest1 = (char *)dest;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	dest = dest1;
	return (dest);
}
