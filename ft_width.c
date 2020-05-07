#include "ft_printf.h"

int	ft_width(t_pf *det)
{
	int	idx;

	if (det->flag[0] == '0')
		det->zero = 1;
	idx = ft_find_char(det->flag, '.');
	if (idx < 0)
		idx = det->idx_letter;
	if (idx == 0)
		return (0);
	det->width = ft_atoi(ft_substr(det->flag, 0, idx));
	return (0);
}