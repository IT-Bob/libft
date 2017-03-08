/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/03 09:49:39 by aguerin           #+#    #+#             */
/*   Updated: 2017/02/03 09:49:42 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Suppression de toute la liste (libération de la mémoire allouée).
*/

void	ft_lstdelall(t_list *list)
{
	t_list *new;

	while (list)
	{
		new = list->next;
		free(list->content);
		list->content = NULL;
		free(list);
		list = new;
	}
	list = NULL;
}
