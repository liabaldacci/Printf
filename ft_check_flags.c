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

int		ft_check_flags(t_pf *det)
{
	if (ft_star(det) <	0)
		return (-1);
	if (ft_negative(det) < 0)
		return (-1);
	return (0);
}
 