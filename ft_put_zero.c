#include "ft_printf.h"

void	ft_put_zero(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd('0', 1);
		i++;
	}
}
