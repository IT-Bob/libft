/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount_if.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:05:08 by aguerin           #+#    #+#             */
/*   Updated: 2017/11/07 10:09:23 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_lstcount_if() renvoie le nombre d'éléments de la liste qui, passés à la
** fonction f, renvoient 1.
*/

#include "libft.h"

int	ft_lstcount_if(t_list *list, int f(void*))
{
	int	i;

	i = 0;
	if (f)
		while (list)
		{
			if (f(list->content))
				i++;
			list = list->next;
		}
	return (i);
}
