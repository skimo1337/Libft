/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 04:32:01 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/22 02:13:06 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*dest;

	dest = (void *)malloc(size * sizeof(*dest));
	if (!dest)
		return (NULL);
	ft_bzero(dest, size);
	return (dest);
}
