/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:51:50 by aguerin           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/11/07 10:00:22 by aguerin          ###   ########.fr       */
=======
/*   Updated: 2017/11/07 09:54:22 by aguerin          ###   ########.fr       */
>>>>>>> 32496f05f88b6c37b3171dc4b23d089cb2f047a0
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
<<<<<<< HEAD
		{
			if (f(list->content))
				return (1);
			list = list->next;
		}
=======
			if (f(list->content))
				return (1);
			else
				list = list->next;
>>>>>>> 32496f05f88b6c37b3171dc4b23d089cb2f047a0
	return (0);
}
