/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdeldouble.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 14:57:30 by aguerin           #+#    #+#             */
/*   Updated: 2018/01/10 14:56:19 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strdeldouble() libère la mémoire du double pointeur str
*/

void	ft_strdeldouble(char ***str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[0][i])
			ft_strdel(&str[0][i++]);
		ft_memdel((void**)str);
	}
}
