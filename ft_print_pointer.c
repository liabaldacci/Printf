#include "ft_printf.h"

int		ft_print_pointer(t_pf *det, char *number)
{
	int	i;

	i = 0;
	if (det->precision == 0 && number[0] == '0')
	{
		number = "";
		det->total--;
	}
	if (det->side == 1)
	{
		ft_putstr_fd("0x", 1);
		ft_put_zero(det->prec_zeros);
		ft_putstr_fd(number, 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
		ft_putstr_fd("0x", 1);
		ft_put_zero(det->prec_zeros);
		ft_putstr_fd(number, 1);
	}
	return (0);
}
// |00000x4d2|
// 7
// |0x0000004d2| 