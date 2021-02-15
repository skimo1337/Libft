/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 11:17:42 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/24 18:47:37 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getnextchar(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

static int	ft_countstring(char const *s, char c)
{
	int		cnt;
	int		ischar;

	cnt = 0;
	ischar = 0;
	while (*s != '\0')
	{
		if (*s == c)
			ischar = 0;
		if (*s != c && ischar == 0)
		{
			cnt++;
			ischar = 1;
		}
		s++;
	}
	return (cnt);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**foo;
	int		index;

	if (!s)
		return (NULL);
	index = 0;
	foo = (char **)malloc(sizeof(char *) * (ft_countstring(s, c) + 1));
	if (!foo)
		return (NULL);
	while (*s != '\0' && ft_countstring(s, c) > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		while (*s != '\0' && *s != c)
		{
			if (!(foo[index] = ft_strsub(s, 0, getnextchar(s, c))))
				return (NULL);
			s = s + (getnextchar(s, c));
			index++;
		}
	}
	foo[index] = 0;
	return (foo);
}
