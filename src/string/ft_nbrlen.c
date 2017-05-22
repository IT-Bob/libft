#include "libft.h"

/*
** ft_nbrlen() renvoie le nombre de caractères nécessaire pour pouvoir stocker
** nb dans une chaîne. Si le nombre envoyé est négatif, le moins est compté.
*/

int	ft_nbrlen(long nb)
{
	unsigned long	n;
	int				i;

	n = (nb < 0 ? -nb : nb);
	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return ((nb < 0 ? i + 1 : i));
}
