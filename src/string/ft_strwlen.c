/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/16/03 23:49:36 by aguerin           #+#    #+#             */
/*   Updated: 2017/02/01 23:49:57 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strwlen(wchar_t *str)
{
	int	i;

	if (!str)
		ft_error("Erreur : Chaîne NULL. - ft_strwlen()", -1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
