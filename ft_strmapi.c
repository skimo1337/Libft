/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 10:00:01 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/21 10:06:33 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	dest = ft_strnew(j);
	if (dest == NULL)
		return (NULL);
	while (i < j)
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	return (dest);
}
