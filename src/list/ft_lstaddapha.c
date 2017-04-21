/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddapha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 13:52:07 by aguerin           #+#    #+#             */
/*   Updated: 2017/04/21 13:52:09 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**
*/

void	ft_lstaddalpha(t_list **alst, t_list *new)
{
	t_list	*lst;
	t_list	*prev;
	int		find;

	lst = *alst;
	prev = NULL;
	find = 0;
	if (!lst)
		*alst = new;
	else
	{
		while (lst && (ft_strcmp(new->content, lst->content) > 0))
		{
			prev = lst;
			lst = lst->next;
			ft_putendl("What");
		}
		if (prev)
			prev->next = new;
		new->next = lst;
	}
}
