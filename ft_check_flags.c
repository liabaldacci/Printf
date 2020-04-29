#include "ft_printf.h"

int		ft_star(t_pf det)
{
	int 	star;
	int		i;
	char	*flag1;

	i = 0;
	while ((star = ft_find_char(det.flag, '*')) >= 0 && i < 2)
	{
		det.temp = va_arg(det.ap, int);
		flag1 = ft_strjoin(ft_substr(det.flag, 0, star), ft_itoa(det.temp));
		det.flag = ft_strjoin(flag1, ft_substr(det.flag, star + 1, ft_strlen(det.flag)));
		free (flag1);
		i++;
	}
	if ((ft_find_char(det.flag, '*')) >= 0)
		reuturn (-1);
	return (0);
}
int		ft_check_flags(t_pf det)
{
	if (ft_star(det) <	0)
		return (-1);
}
