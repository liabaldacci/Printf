#include "ft_printf.h"

int		ft_negative(t_pf *det)
{
	int	i;

	i = 0;
	while (det->flag[i] == '-')
	{
		det->side = 1;
		i++;
	}
	det->flag = ft_substr(det->flag, i, ft_strlen(det->flag));
	if (ft_find_char(det->flag, '-') != -1)
		return (-1);
	return (0);
}