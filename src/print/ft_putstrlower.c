#include "libft.h"

int	ft_putstrlower(const char *str)
{
	int	i;
	int	cmp;

	if (!str)
		ft_error("Erreur : Chaîne NULL. - ft_putstrlower", -1);
	i = 0;
	cmp = 0;
	while (str[i])
		cmp += ft_putchar(ft_tolower(str[i++]));
	return (cmp);
}
