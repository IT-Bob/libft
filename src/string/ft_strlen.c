/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 11:37:36 by aguerin           #+#    #+#             */
/*   Updated: 2017/02/01 15:07:57 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		ft_error("Erreur : Chaîne NULL. - ft_strlen()", -1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}
