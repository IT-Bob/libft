/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:55:33 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/17 11:43:01 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_zero(char *nbr)
{
	nbr = (char*)ft_memalloc(2);
	ft_strcpy(nbr, "0");
	return (nbr);
}

static int	ft_neg(int n, unsigned int *m)
{
	if (n < 0)
	{
		*m = -n;
		return (1);
	}
	*m = n;
	return (0);
}

static int	ft_size_itoa(unsigned int m)
{
	int	i;

	i = 0;
	while (m > 0)
	{
		i++;
		m /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	unsigned int	m;
	unsigned int	size;
	int				neg;
	char			*nbr;

	nbr = NULL;
	if (n == 0)
		return (ft_zero(nbr));
	neg = ft_neg(n, &m);
	size = ft_size_itoa(m) + neg;
	nbr = (char*)ft_memalloc(size + 1);
	if (nbr)
	{
		nbr[size] = '\0';
		size--;
		while (m > 0)
		{
			nbr[size--] = m % 10 + '0';
			m /= 10;
		}
		if (neg)
			nbr[size] = '-';
		return (nbr);
	}
	return (NULL);
}
