/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:45:43 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/16 15:46:17 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int m;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		m = -n;
	}
	else
		m = n;
	if (m > 9)
	{
		ft_putnbr_fd(m / 10, fd);
		ft_putchar_fd((m % 10) + '0', fd);
	}
	else
		ft_putchar_fd(m + '0', fd);
}
