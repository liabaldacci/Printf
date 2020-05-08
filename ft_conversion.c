#include "ft_printf.h"

int		ft_conversion(t_pf *det)
{
	if (det->conversion == 's')
		ft_printf_s(det);
	else if (det->conversion == 'c')
		ft_printf_c(det);
	else if (det->conversion == 'd')
		ft_printf_d(det);
	return (0);
}