/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 09:46:53 by aguerin           #+#    #+#             */
/*   Updated: 2017/03/08 09:46:57 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

long long int	ft_pow(int nb, unsigned int power)
{
	long long res;

	res = 1;
	while (power--)
		res = res * nb;
	return (res);
}
