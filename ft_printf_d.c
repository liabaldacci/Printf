#include "ft_printf.h"

int			ft_printf_d(t_pf *det)
{
	int		num;
	char	*number;
	int 	len;
	int		i;

	ft_padding(det);
	num = va_arg(det->ap, int);
	if (num < 0)
	{
		det->negative = 1;
		num = num * -1;
		det->total++;
	}
	if (det->conversion == 'u' & num < 0)
		number = ft_itoa_base(num, 10, 'a');
	else if (det->conversion == 'x')
		number = ft_itoa_base(num, 16, 'a');
	else if (det->conversion == 'X')
		number = ft_itoa_base(num, 16, 'A');
	else
		number = ft_itoa(num);
	len = ft_strlen(number);
	i = len;
	ft_int_formatting(det, len, i);
	ft_print_int(det, number);
	det->total += ft_strlen(number) + det->prec_zeros + det->spaces;
	free(number);
	return (0);
}