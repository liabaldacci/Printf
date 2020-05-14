#include "ft_printf.h"

int		ft_print_int(t_pf *det, char *number)
{
	int	i;

	i = 0;
	if (det->side == 1)
	{
		if (det->negative > 0)
			ft_putchar_fd('-', 1);
		ft_put_zero(det->prec_zeros);
		ft_putstr_fd(number, 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
		if (det->negative > 0)
			ft_putchar_fd('-', 1);
		ft_put_zero(det->prec_zeros);
		ft_putstr_fd(number, 1);
	}
	return (0);
}