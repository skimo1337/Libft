/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:01:57 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/25 21:21:55 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		atoi;
	int		sign;
	int		i;

	sign = 1;
	i = 0;
	atoi = 0;
	while (nptr[i] < 33 && nptr[i] != '\0' && nptr[i] != '\e'
			&& nptr[i] != '\200')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		atoi = atoi * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * atoi);
}
