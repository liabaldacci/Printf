#include "ft_printf.h"

int			ft_printf_s(t_pf *det)
{
	char	*str;
	char	*temp;
	int 	len;
	int		i;

	i = 0;
	str = va_arg(det->ap, char *);
	if (!str)
		str = ft_substr("(null)", 0, 6);
	len = ft_strlen(str);
	ft_padding(det);
	if (det->precision >= 0) /* se existir precisão */
	{
		if (det->precision < len) /* se a precisão for menor do que a len do argumento (str) */
			len = det->precision; /* o valor da len vira o valor da precisão para truncar a str */
	}
	if (det->width != -1) /* se a width existir */
	{
		if (det->width > len) /* se a width for maior do que a len o número de espaços do padding vai ser o width - len */
			det->spaces = det->width - len;
	}
	temp = ft_substr(str, 0, len);
	if (det->side == 1)
	{
		ft_putstr_fd(temp, 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
		ft_putstr_fd(temp, 1);
	}
	det->total += ft_strlen(temp) + det->spaces;
	free(temp);
	return (0);
}	