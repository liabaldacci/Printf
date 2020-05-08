#include "ft_printf.h"

int			ft_printf_d(t_pf *det)
{
	int		num;
	char	*number;
	int 	len;
	int		i;
	int		prec_zeros;

	ft_padding(det);
	prec_zeros = 0;
	num = va_arg(det->ap, int);
	number = ft_itoa(num);
	len = ft_strlen(number);
	i = len;
	if (det->precision >= 0) /* se existir precisão */
	{
		if (det->precision > len) /* se a precisão for menor do que a len do argumento (str) */
		{
			prec_zeros = det->precision - len; /* o valor da len vira o valor da precisão para truncar a str */
			i = det->precision;
		}
	}
	if (det->width != -1) /* se a width existir */
	{
		if (det->width > len && det->width > det->precision) /* se a width for maior do que a len o número de espaços do padding vai ser o width - len */
			det->spaces = det->width - i;
	}
	i = 0;
	if (det->side == 1)
	{
		ft_put_zero(prec_zeros);
		ft_putstr_fd(number, 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
		ft_put_zero(prec_zeros);
		ft_putstr_fd(number, 1);
	}
	free(number);
	return (0);
}

