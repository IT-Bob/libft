/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount_all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 09:36:05 by aguerin           #+#    #+#             */
/*   Updated: 2017/11/30 09:41:29 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	\brief	Renvoie le total des retours de la fonction _f_
**
**	La fonction appelle la fonction _f_ (en lui donnant en paramètre le champ
**	_content_ de la structure _lst_) sur chaque maillon de la liste et retourne
**	la somme totale des retours de la fonction _f_.
*/

int	ft_lstcount_all(t_list *lst, int f(void*))
{
	int	tot;

	tot = 0;
	while (lst)
	{
		if (lst->content)
			tot += f(lst->content);
		lst = lst->next;
	}
	return (tot);
}
