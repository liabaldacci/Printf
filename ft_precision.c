#include "ft_printf.h"

int			ft_precision(t_pf *det)
{
	int		idx;
	int		idx2;
	char	*temp;

	idx = ft_find_char(det->flag, '.');
	idx2 = ft_find_letter(det->flag);
	if (idx < 0)
		return (0);
	if (idx2 == 1)
	{
		det->precision = 0;
		return (0);
	}
	if (det->conversion == 'p')
		return (-1);
	temp = ft_substr(det->flag, idx + 1, idx2 - idx);
	det->precision = ft_atoi(temp);
	free(temp);
	return (0);
}