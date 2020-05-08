#include "ft_printf.h"

int			ft_negative(t_pf *det)
{
	int		i;
	char	*temp;

	i = 0;
	while (det->flag[i] == '-')
	{
		det->side = 1;
		i++;
	}
	temp = det->flag;
	det->flag = ft_substr(det->flag, i, ft_strlen(det->flag));
	free(temp);
	if (ft_find_char(det->flag, '-') != -1)
		return (-1);
	return (0);
}