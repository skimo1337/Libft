/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 14:18:12 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/23 15:38:11 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*s11;
	unsigned const char	*s22;

	s11 = (unsigned const char *)s1;
	s22 = (unsigned const char *)s2;
	while (n--)
	{
		if (*s11 != *s22)
			return (*s11 - *s22);
		s11++;
		s22++;
	}
	return (0);
}
