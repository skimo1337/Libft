/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 07:51:22 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/21 10:04:10 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	dest = ft_strnew(j);
	if (dest == NULL)
		return (NULL);
	while (i < j)
	{
		dest[i] = f(s[i]);
		i++;
	}
	return (dest);
}
