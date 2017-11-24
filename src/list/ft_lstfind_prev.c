/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_prev.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 11:36:32 by aguerin           #+#    #+#             */
/*   Updated: 2017/11/24 11:40:41 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Recherche de maillon validant une condition
**
**	ft_lstfindi_prev() parcourt (vers les maillons précédents et non pas
**	suivants) la liste _lst_ et retourne le premier maillon dont le contenu
**	`content` valide la condition testée par la fonction _f_.
**	Si aucun maillon ne valide la condition, **NULL** est retourné.
*/

t_list	*ft_lstfind_prev(t_list *lst, int f(void*))
{
	while (lst)
	{
		if (f(lst->content))
			return (lst);
		lst = lst->prev;
	}
	return (lst);
}
