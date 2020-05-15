#include "ft_printf.h"

int		ft_printf_xX(t_pf *det)
{
	size_t	num;
	char	*number;
	int 	len;

	ft_padding(det);
	num = va_arg(det->ap, size_t);
	if (num < 0)
	{
		det->negative = 1;
		num = num * -1;
		det->total++;
	}
	if (det->conversion == 'x')
		number = ft_itoa_base(num, 16, 'a');
	else if (det->conversion == 'X')
		number = ft_itoa_base(num, 16, 'A');
	else
		number = ft_itoa(num);
	len = det->precision == 0 && num == 0 ? 0 : ft_strlen(number);
	ft_int_formatting(det, len, len);
	ft_print_int(det, number);
	det->total += ft_strlen(number) + det->prec_zeros + det->spaces;
	free(number);
	return (0);
}