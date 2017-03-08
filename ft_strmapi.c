/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:42:22 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/16 15:37:35 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*str;

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
					str[i] = f(i, *s);
					i++;
					s++;
				}
				str[i] = '\0';
				return (str);
			}
		}
	}
	return (NULL);
}
