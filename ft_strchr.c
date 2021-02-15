/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:59:49 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/22 01:39:30 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	test;
	char	*stest;

	i = 0;
	test = (char)c;
	stest = (char*)s;
	while (stest[i] != '\0')
	{
		if (stest[i] == test)
			return (stest + i);
		i++;
	}
	if (stest[i] == test)
	{
		return (stest + i);
	}
	return (NULL);
}
