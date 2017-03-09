/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 13:40:44 by aguerin           #+#    #+#             */
/*   Updated: 2017/02/24 13:40:48 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_putnbr_long(long long int n)
{
	unsigned long long int	m;

	if (n < 0)
	{
		ft_putchar('-');
		m = -n;
	}
	else
		m = n;
	if (m > 9)
	{
		ft_putnbr_long(m / 10);
		ft_putchar((m % 10) + '0');
	}
	else
		ft_putchar(m + '0');
}
