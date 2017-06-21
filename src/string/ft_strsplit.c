/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 12:38:54 by aguerin           #+#    #+#             */
/*   Updated: 2017/06/21 12:41:58 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**split(char **new, size_t size, const char *str, char c)
{
	char	*begin;
	char	*end;
	size_t	i;

	i = 0;
	begin = (char*)str;
	end = NULL;
	while (begin && i < size)
	{
		if ((end = ft_strchr(begin, c)) && end > begin)
			new[i++] = ft_strsub(begin, 0, end - begin);
		else if (end > begin || !end)
			new[i++] = ft_strdup(begin);
		begin = (end ? end + 1 : end);
	}
	return (new);
}

char		**ft_strsplit(const char *str, char c)
{
	char	**new;
	size_t	size;

	new = NULL;
	if (str)
	{
		size = ft_count_word(str, c);
		if (!(new = (char**)ft_memalloc(sizeof(char*) * (size + 1))))
			ft_perror("Erreur d'allocation", -1);
		new = split(new, size, str, c);
	}
	return (new);
}
