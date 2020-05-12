#include "ft_printf.h"

int		ft_printf_percent(t_pf *det)
{
	int		i;

	i = 0;
	ft_padding(det);
	if (det->width != -1) /* se a width existir */
	{
		if (det->width > 1) /* se a width for maior do que a 1 (tamanho do char) o número de espaços do padding vai ser o width - len */
			det->spaces = det->width - 1;
	}
	if (det->side == 1)
	{
		ft_putchar_fd('%', 1);
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
	}
	else if (det->side == 0)
	{
		while (i++ < det->spaces)
			ft_putchar_fd(det->padding, 1);
		ft_putchar_fd('%', 1);
	}
	return (0);
}