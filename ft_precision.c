#include "ft_printf.h"

int	ft_precision(t_pf *det)
{
	int	idx;
	int	idx2;

	idx = ft_find_char(det->flag, '.');
	idx2 = ft_find_letter(det->flag);
	if (idx < 0 || idx2 == 1)
		return (0);
	det->precision = ft_atoi(ft_substr(det->flag, idx + 1, idx2 - idx));
	return (0);
}