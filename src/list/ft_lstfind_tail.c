/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:28:05 by aguerin           #+#    #+#             */
/*   Updated: 2017/11/24 14:30:44 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	\brief	Renvoie la queue de liste.
*/

t_list	*ft_lstfind_tail(t_list *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}
