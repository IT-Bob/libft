/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharl_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 11:26:38 by aguerin           #+#    #+#             */
/*   Updated: 2017/04/26 11:26:43 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_putcharl_fd(char c, int fd)
{
	return (ft_putchar_fd(fd, c), ft_putchar_fd(fd, '\n'));
}
