#include "ft_printf.h"

int			ft_printf_p(t_pf *det)
{
	size_t	num;
	char	*number;
	int 	len;
	int		i;
	char	*temp;

	ft_padding(det);
	num = va_arg(det->ap, size_t);
	number = ft_itoa_base(num, 16, 'a');
	len = ft_strlen(number) + 2;
	i = len;
	det->precision = len;
	ft_int_formatting(det, len, i);
	temp = number;
	number = ft_strjoin("0x", number);
	det->total += ft_strlen(number) + det->spaces;
	ft_print_int(det, number);
	free(temp);
	free(number);
	return (0);
}