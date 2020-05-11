#include "ft_printf.h"

int		ft_conversion(t_pf *det)
{
	if (det->conversion == 's')
		ft_printf_s(det);
	else if (det->conversion == 'c')
		ft_printf_c(det);
	else if (det->conversion == 'd' || det->conversion == 'i' 
			|| det->conversion == 'x' || det->conversion == 'X')
		ft_printf_d(det);
	else if (det->conversion == 'p')
		ft_printf_p(det);
	else if (det->conversion == 'u')
		ft_printf_u(det);
	return (0);
}
