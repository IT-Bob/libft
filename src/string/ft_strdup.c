/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:03:54 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/21 11:33:01 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		size;
	int		i;
	char	*s;

	size = ft_strlen((char*)s1);
	s = (char*)malloc(sizeof(char) * size + 1);
	if (s)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	else
		return (NULL);
}