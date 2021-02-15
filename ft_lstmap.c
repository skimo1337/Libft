/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:03:34 by mmoufakk          #+#    #+#             */
/*   Updated: 2018/10/25 21:06:43 by mmoufakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*head;

	if (lst == NULL || f == NULL)
		return (NULL);
	res = f(lst);
	lst = lst->next;
	head = res;
	while (lst)
	{
		res->next = f(lst);
		lst = lst->next;
		res = res->next;
	}
	res->next = NULL;
	return (head);
}
