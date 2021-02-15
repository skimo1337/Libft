/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:35:28 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/19 15:41:17 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		tf_length;
	char	*str;

	str = (char*)s1;
	tf_length = ft_strlen(s2);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == s2[j] && str[i + j] != '\0')
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
