/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:59:49 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/20 14:54:56 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	test;
	char	*stest;

	i = ft_strlen(s) - 1;
	test = (char)c;
	stest = (char *)s;
	if (stest[i + 1] == test)
	{
		return (stest + (i + 1));
	}
	while (stest[i] != '\0' && i >= 0)
	{
		if (stest[i] == test)
			return (stest + i);
		i--;
	}
	return (NULL);
}
