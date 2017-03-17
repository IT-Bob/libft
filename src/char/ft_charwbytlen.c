/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charwbytlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 11:03:16 by aguerin           #+#    #+#             */
/*   Updated: 2017/03/17 11:03:31 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_charwbytlen() renvoie la longueur de c en octet.
*/

#include "libft.h"

int				ft_charwbytlen(wchar_t c)
{
	if (c <= 127)
		return (1);
	else if (c <= 28607)
		return (2);
	else if (c <= 15712191)
		return (3);
	else
		return (4);
}
