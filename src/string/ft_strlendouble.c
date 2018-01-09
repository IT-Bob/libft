/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlendouble.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:16:33 by aguerin           #+#    #+#             */
/*   Updated: 2018/01/09 11:17:35 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlendouble(char **doublestr)
{
	int	i;

	i = 0;
	if (doublestr)
		while (doublestr[i])
			i++;
	return (i);
}
