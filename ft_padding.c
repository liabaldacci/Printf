#include "ft_printf.h"

int		ft_padding(t_pf *det)
{
	if (det->precision < 0)
		{
			if (det->zero == 1)
				det->padding = '0';
		}
	return (0);
}