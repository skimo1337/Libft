/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 15:37:21 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/30 21:14:25 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	tf_length;
	char	*str;

	str = (char*)s1;
	tf_length = ft_strlen(s2);
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] == s2[j] && str[i + j] != '\0' && i + j < n)
		{
			j++;
		}
		if (j == tf_length)
			return (str + i);
		i++;
	}
	if (tf_length == 0)
		return (str);
	return (NULL);
}
