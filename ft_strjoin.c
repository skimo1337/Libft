/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 23:49:27 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/23 14:57:51 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*sub;

	if (s1 != NULL && s2 != NULL)
	{
		sub = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!sub)
			return (NULL);
		sub = ft_strcpy(sub, s1);
		sub = ft_strcat(sub, s2);
		return (sub);
	}
	return (NULL);
}
