/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 23:56:13 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/25 21:04:32 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_delbeg(char const *src)
{
	int		i;

	i = 0;
	while (src[i] && (src[i] == ' ' || src[i] == '\n' || src[i] == '\t'))
	{
		i++;
	}
	return (i);
}

static int	ft_delend(char const *s)
{
	int		k;

	k = ft_strlen(s) - 1;
	while (k >= 0 && (s[k] == ' ' || s[k] == '\n' || s[k] == '\t'))
	{
		k--;
	}
	return (k);
}

char		*ft_strtrim(char const *s)
{
	char	*dest;
	int		i;
	int		k;
	int		j;

	if (s != NULL)
	{
		i = ft_delbeg(s);
		k = ft_delend(s);
		if (k - i + 1 <= 0)
			return (ft_strdup(""));
		dest = ft_strnew(k - i + 1);
		if (!dest)
			return (NULL);
		j = 0;
		while (i <= k)
		{
			dest[j] = s[i];
			i++;
			j++;
		}
		return (dest);
	}
	return (NULL);
}
