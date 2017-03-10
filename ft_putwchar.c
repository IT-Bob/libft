/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 14:52:03 by aguerin           #+#    #+#             */
/*   Updated: 2017/03/10 14:52:05 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	cut(char *tab, int size, int ret[])
{
	int	i;
	int cpt;

	i = size - 8;
	cpt = 0;
	while (i >= 0)
	{
		ret[i / 8] = ft_atoi_base(&tab[i], 2);
		tab[i] = '\0';
		i -= 8;
		cpt++;
	}
	return (cpt);
}

static char	*fill_new(char *new, char *old, int length, int size)
{
	int	i;

	i = length;
	--size;
	while (--i)
		if (size >= 0 && new[i] == 'x')
			new[i] = old[size--];
	i = -1;
	while (new[++i])
		if (new[i] == 'x')
			new[i] = '0';
	free(old);
	return (new);
}

static int	find_length(int size)
{
	if (size <= 7)
		return (8);
	else if (size <= 11)
		return (16);
	else if (size <= 16)
		return (24);
	else
		return (32);
}

/*
** length est la taille totale du tableau. Size est comparée au nombre de x
*/

static char	*find_mask(int size, char *tab)
{
	char	*new;
	int		length;

	length = find_length(size);
	if ((new = ft_strnew(length)))
	{
		if (length == 8)
			ft_strcpy(new, "0xxxxxxx");
		else if (length == 16)
			ft_strcpy(new, "110xxxxx10xxxxxx");
		else if (length == 24)
			ft_strcpy(new, "1110xxxx10xxxxxx10xxxxxx");
		else
			ft_strcpy(new, "11110xxx10xxxxxx10xxxxxx10000000");
		fill_new(new, tab, length, size);
		return (new);
	}
	ft_error("Erreur d'allocation... - create_table", -1);
	return (NULL);
}

/*
** ft_putwchar permet d'afficher les caractères étendus.
** Le char envoyé doit d'abord être converti en décimal pour appliquer le masque
** unicode. Le binaire est ensuite reconverti en décimal pour l'affichage.
*/

void		ft_putwchar(long c)
{
	char	*tab;
	int		ret[4];
	int		nb_oct;
	int		i;

	i = 0;
	if (c < -2147483648 || c > 2147483647)
		ft_error("Erreur : Valeur incorrect - ft_putwchar.", -1);
	if (c > 127)
	{
		if (!(tab = ft_itoa_base(c, 2)))
			ft_error("Erreur de conversion - ft_putwchar", -1);
		tab = find_mask(ft_strlen(tab), tab);
		nb_oct = cut(tab, ft_strlen(tab), ret);
		while (i < nb_oct)
			ft_putchar(ret[i++]);
		free(tab);
	}
	else
		ft_putchar(c);
}
