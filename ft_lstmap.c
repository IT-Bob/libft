/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:46:13 by aguerin           #+#    #+#             */
/*   Updated: 2017/01/30 12:16:36 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst1;
	t_list	*new_list;
	t_list	*new_elem;

	lst1 = lst;
	new_list = NULL;
	while (lst1)
	{
		new_elem = f(lst1);
		if (!new_list)
			new_list = new_elem;
		else
			ft_lstaddend(&new_list, new_elem);
		lst1 = lst1->next;
	}
	return (new_list);
}
