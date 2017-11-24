/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:52:32 by aguerin           #+#    #+#             */
/*   Updated: 2017/11/24 10:53:04 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	\brief	Application de fonction conditionnelle.
**
**	Applique la fonction `t` sur chaque maillon de la liste et,
**	si celle-ci renvoie _vrai_, applique la fonction `f` sur les maillons.
*/

void	ft_lstiter_if(t_list *lst, void (*f)(void*), int (t)(void*))
{
	while (lst)
	{
		if (t(lst->content))
			f(lst->content);
		lst = lst->next;
	}
}
