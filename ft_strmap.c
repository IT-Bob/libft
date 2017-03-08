/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:42:07 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/16 15:37:22 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		len;
	int		i;

	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		if (len > 0)
		{
			str = (char*)ft_memalloc(len + 1);
			if (str)
			{
				while (*s)
				{
					str[i++] = f(*s);
					s++;
				}
				str[i] = '\0';
				return (str);
			}
		}
	}
	return (NULL);
}
