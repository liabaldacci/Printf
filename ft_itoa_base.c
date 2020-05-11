#include "ft_printf.h"

char	*ft_itoa_base(size_t nb, int base, char updown)
{
	int				cont_num;
	size_t	aux;
	char			*str;

	cont_num = 1;
	aux = nb;
	while ((aux = aux / base) > 1)
		cont_num++;
	str = (char *)malloc((cont_num + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[cont_num--] = '\0';
	while (cont_num >= 0)
	{
		if ((nb % base) < 10)
			str[cont_num] = (nb % base) + '0';
		else
			str[cont_num] = (nb % base) + updown - 10;
		nb = nb / base;
		cont_num--;
	}
	return (str);
}