#include "ft_printf.h"

int		ft_star(t_pf *det)
{
	int 	star;
	int		i;
	char	*flag1;

	i = 0;
	flag1 = det->flag;
	while ((star = ft_find_char(det->flag, '*')) >= 0 && i < 2)
	{
		det->temp = va_arg(det->ap, int);
		flag1 = ft_strjoin(ft_substr(det->flag, 0, star), ft_itoa(det->temp));
		det->flag = ft_strjoin(flag1, ft_substr(det->flag, star + 1, ft_strlen(det->flag)));
		free (flag1);
		flag1 = det->flag;
		i++;
	}
	if ((ft_find_char(det->flag, '*')) >= 0)
		return (-1);
	flag1 = det->flag;
	return (0);
}