#include "ft_printf.h"

int				ft_printf_u(t_pf *det)
{
	size_t		num;
	char		*number;
	int 		len;
	int			i;

	ft_padding(det);
	num = va_arg(det->ap, size_t);
	number = ft_itoa_base(num, 10, 'a');
	len = ft_strlen(number);
	i = len;
	ft_int_formatting(det, len, i);
	ft_print_int(det, number);
	free(number);
	return (0);
}