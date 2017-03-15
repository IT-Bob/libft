/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 10:44:33 by aguerin           #+#    #+#             */
/*   Updated: 2017/03/15 10:44:36 by aguerin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_putnchar() affiche les n premiers caractères de la chaîne str.
** Si n est plus grand que la taille de la chaîne, l'affichage s'arrête en fin
** de chaîne.
** Si str est NULL, la fonction quitte en affichant une erreur.
** La fonction renvoie le nombre de caractères affichés.
*/

#include "libft.h"

int	ft_putnchar(const char *str, unsigned int n)
{
	int	cmp;

	if (!str)
		ft_error("Erreur : Chaîne NULL... - ft_putnchar()", -1);
	cmp = 0;
	while (*str && n-- > 0)
		cmp += ft_putchar(*(str++));
	return (cmp);
}
