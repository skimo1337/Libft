/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:50:47 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/25 20:55:18 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*dest;
	size_t	i;

	i = 0;
	if (!(dest = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		dest->content = NULL;
		dest->content_size = 0;
	}
	else
	{
		dest->content = ft_strdup((const char *)content);
		dest->content_size = content_size;
	}
	dest->next = NULL;
	return (dest);
}
