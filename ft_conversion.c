#include "ft_printf.h"

int		ft_conversion(t_pf *det)
{
	if (det->conversion == 's')
		ft_printf_s(det);
	return (0);
}