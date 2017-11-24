/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:03:09 by aguerin           #+#    #+#             */
/*   Updated: 2017/11/24 11:41:08 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Recherche de maillon validant une condition
**
**	ft_lstfind() parcourt la liste _lst_ et retourne le premier maillon
**	dont le contenu `content` valide la condition testée par la fonction _f_.
**	Si aucun maillon ne valide la condition, **NULL** est retourné.
*/

t_list	*ft_lstfind(t_list *lst, int f(void *))
{
	while (lst)
	{
		if (f(lst->content))
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
