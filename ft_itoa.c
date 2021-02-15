/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 06:19:25 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/22 06:49:13 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_isnega(int *n, int *sign)
{
	if (*n < 0)
	{
		*n *= -1;
		*sign = 1;
	}
}

char		*ft_itoa(int n)
{
	int		temp;
	int		len;
	int		sign;
	char	*s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	temp = n;
	sign = 0;
	ft_isnega(&n, &sign);
	len = sign;
	while (temp /= 10)
		len++;
	s = ft_strnew(len + 1);
	if (!s)
		return (NULL);
	while (len >= 0)
	{
		s[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	if (sign == 1)
		s[0] = '-';
	return (s);
}
