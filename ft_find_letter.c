#include "ft_printf.h"

int		ft_find_letter(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == '%'|| str[i] == 'c'|| str[i] == 's'|| str[i] == 'u'
			|| str[i] == 'p'|| str[i] == 'd'|| str[i] == 'i'
			|| str[i] == 'x'|| str[i] == 'X')
			return (i);
		i++;
	}
	return (-1);
}
