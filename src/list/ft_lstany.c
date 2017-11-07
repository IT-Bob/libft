/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:51:50 by aguerin           #+#    #+#             */
/*   Updated: 2017/11/07 09:54:22 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstany() renvoie 1 si au moins un élément de la liste passé à la fonction
** f renvoie 1.
*/

#include "libft.h"

int	ft_lstany(t_list *list, int f(void *))
{
	if (f)
		while (list)
			if (f(list->content))
				return (1);
			else
				list = list->next;
	return (0);
}
