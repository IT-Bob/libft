/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:04:27 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/09 12:18:58 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *s1;

	s1 = NULL;
	while (*s)
	{
		if (*s == c)
			s1 = (char*)s;
		s++;
	}
	if (*s == c)
		return ((char*)s);
	else if (s1)
		return (s1);
	return (NULL);
}
