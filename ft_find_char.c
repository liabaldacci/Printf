#include "ft_printf.h"

int		ft_find_char(char *str, char c)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
