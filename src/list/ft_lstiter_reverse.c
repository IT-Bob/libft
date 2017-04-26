/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 13:36:11 by aguerin           #+#    #+#             */
/*   Updated: 2017/04/26 13:36:13 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstiter_reverse() applique la fonction f sur chaque maillon de la liste
** lst en commençant par le dernier élement.
*/

#include "libft.h"

void	ft_lstiter_reverse(t_list *lst, void (*f)(t_list *elem))
{
	if (lst)
	{
		if (lst->next)
			ft_lstiter_reverse(lst->next, f);
		f(lst);
	}
}
