#include "ft_printf.h"

int			ft_printf_p(t_pf *det)
{
	size_t	num;
	char	*number;
	int 	len;
	char	*temp;

	ft_padding(det);
	num = va_arg(det->ap, size_t);
	number = ft_itoa_base(num, 16, 'a');
	if (det->precision > ft_strlen(number))
		len = ft_strlen(number);
	else if (det->precision == 0 && num == 0)
		len = 2;
	else 
		len = ft_strlen(number) + 2;
	temp = number;
	number = det->precision == 0 && num == 0 ? "" : number;
	ft_int_formatting(det, len, len);
	if (det->width < det->precision)
	{
		if (det->precision > len)
			det->total += det->precision + 2;
		else
			det->total += len;	
	}
	else
	{
			det->total += det->spaces + len;
	}
	
	ft_print_pointer(det, number);
	free(temp);
	// if (num != 0)
	// 	free(number);
	return (0);
}