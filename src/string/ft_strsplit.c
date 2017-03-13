/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:43:08 by aguerin           #+#    #+#             */
/*   Updated: 2016/11/21 10:53:28 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_word(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_split(char **sstr, char const *s, char c)
{
	int i;
	int j;
	int end;

	i = 0;
	j = 0;
	end = 0;
	while (s[i] && j != ft_count_word(s, c))
	{
		if (s[i] != c)
		{
			end = ft_word(&s[i], c);
			if (!(sstr[j] = (char*)malloc(sizeof(char) * (end + 1))))
				return (NULL);
			sstr[j] = ft_strsub(s, i, end);
			i += end;
			j++;
		}
		i++;
	}
	return (sstr);
}

char		**ft_strsplit(char const *s, char c)
{
	int		nbword;
	char	**sstr;

	if (s)
	{
		nbword = ft_count_word(s, c);
		sstr = (char**)malloc(sizeof(char*) * nbword + 1);
		if (sstr)
		{
			sstr[nbword] = NULL;
			return (ft_split(sstr, s, c));
		}
	}
	return (NULL);
}
