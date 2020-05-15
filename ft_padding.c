#include "ft_printf.h"

int		ft_padding(t_pf *det)
{
	if (det->precision < 0)
		{
			if (det->zero == 1 && det->side == 0
				&& det->conversion != 'p')
				det->padding = '0';
		}
	return (0);
}
