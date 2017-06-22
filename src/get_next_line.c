/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 10:15:53 by aguerin           #+#    #+#             */
/*   Updated: 2017/06/22 17:18:34 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

/*
** Lit une ligne et la stocke dans line.
** S'il y a un reste, celui-ci est stocké dans list->content.
*/

static int	read_line(t_list *list, char **line, int rd)
{
	char	buff[BUFF_SIZE + 1];
	char	*ptr;
	char	*tmp;

	while (!(ptr = ft_strchr(list->content, '\n')) &&
		(rd = read(list->content_size, &buff, BUFF_SIZE)) > 0)
	{
		buff[rd] = '\0';
		list->content = ft_strfreejoin((char*)list->content, buff);
	}
	if (ptr)
	{
		*line = ft_strsub(list->content, 0, ptr - (char*)list->content);
		tmp = ft_strsub(&ptr[1], 0, ft_strlen(&ptr[1]));
		ft_strdel((char**)&list->content);
		list->content = tmp;
	}
	else if ((ft_strlen(list->content) > 0 ? rd = 1 : rd))
	{
		*line = ft_strsub(list->content, 0, ft_strlen((char*)list->content));
		ft_strdel((char**)&list->content);
		list->content = ft_strnew(0);
	}
	return ((rd > 0 ? 1 : rd));
}

 void	del(void *content, size_t s)
{
	if (s)
		;
	if (content)
		free(content);
	content = NULL;
}

/*
** Réutilisation des fonctions de gestion de listes de la libft.
** content_size sert à stocker un fd.
** content est un void* et peut donc contenir une chaîne.
*/

static int	get_next_line_list(int fd, char **line, int rt, t_list *new)
{
	static t_list	*list = NULL;

	if (!list)
	{
		if (!(list = ft_lstnew(0, 0)))
			return (-1);
		list->content_size = fd;
		if (!(list->content = ft_strnew(0)))
			return (-1);
	}
	new = list;
	while (new && (int)new->content_size != fd)
		new = new->next;
	if (!new)
	{
		if (!(new = ft_lstnew(NULL, 0)))
			return (-1);
		ft_lstadd(&list, new);
		list->content_size = fd;
		if (!(list->content = ft_strnew(0)))
			return (-1);
	}
	if (!(rt = read_line(new, line, 1)))
		list = ft_lstdelonejoin(fd, list);
	if (!rt)
		; //ft_lstdel(&list, del);
	return (rt);
}

/*
** Vérification du fd et du pointeur sur line
*/

int			get_next_line(int fd, char **line)
{
	t_list			*new;
	int				rt;

	if (fd < 0 || !line)
		return (-1);
	rt = 0;
	new = NULL;
	return (get_next_line_list(fd, line, rt, new));
}
