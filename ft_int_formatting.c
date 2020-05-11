#include "ft_printf.h"

int		ft_int_formatting(t_pf *det, int len, int i)
{
	if (det->precision >= 0) /* se existir precisão */
	{
		if (det->precision > len) /* se a precisão for menor do que a len do argumento (str) */
		{
			det->prec_zeros = det->precision - len; /* o valor da len vira o valor da precisão para truncar a str */
			i = det->precision;
		}
	}
	if (det->width != -1) /* se a width existir */
	{
		if (det->width > len && det->width > det->precision) /* se a width for maior do que a len o número de espaços do padding vai ser o width - len */
			det->spaces = det->width - i;
	}
	return (0);
}