/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 12:09:39 by aguerin           #+#    #+#             */
/*   Updated: 2017/12/08 13:03:23 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	\brief	Réallocation de mémoire avec copie
**
**	La fonction alloue une nouvelle zone de mémoire de taille _newsize_ et copi
**	_old_ dans le nouveau pointeur. La mémore de _old_ est libérée.
**
**	Si _oldsize_ est plus grand que la taille de _old_, le comportement est
**	indéterminé.
**
**	Voir : ft_memalloc() et ft_memcpy().
*/

void	*ft_memrealloc(void *old, size_t oldsize, size_t newsize)
{
	void	*new;

	if ((new = ft_memalloc(newsize)))
		new = ft_memcpy(new, old, oldsize);
	ft_memdel(&old);
	return (new);
}
