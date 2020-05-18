#include "ft_printf.h"

int		ft_printf_percent(t_pf *det)
{
	int		i;

	i = 0;
	ft_padding(det);
	if (det->width != -1)
	{
		if (det->width > 1)
			det->spaces = det->width - 1;
	}
	if (det->side == 1)
	{
		ft_putchar_fd('%', 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
		ft_putchar_fd('%', 1);
	}
	det->total += 1 + det->spaces;
	return (0);
}
