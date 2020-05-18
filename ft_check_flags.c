#include "ft_printf.h"

int		ft_check_flags(t_pf *det)
{
	if (ft_star(det) < 0)
		return (-1);
	if (ft_negative(det) < 0)
		return (-1);
	if (ft_width(det) < 0)
		return (-1);
	if (ft_precision(det) < 0)
		return (-1);
	ft_conversion(det);
	return (0);
}
