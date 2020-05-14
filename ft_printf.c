#include "ft_printf.h"

int			ft_printf(const char *str, ...)
{
	t_pf	det;
	int		i;
	int		current;
	char	*s;
	int		args;


	args = ft_count_args((char *)str);
	if (args < 0)
	{
		ft_putstr_fd("ERROR", 1);
		return (-1);
	}
	current = 0;
	va_start(det.ap, str);
	det.total = 0;
	while (current < args)
	{
		ft_init_struct(&det);
		det.idx_percent = ft_find_char((char *)str, '%');
		s = ft_substr((char *)str, det.idx_percent + 1, ft_strlen(str));
		i = ft_find_letter(s);
		free(s);
		if (i < 0)
		{
			ft_putstr_fd("ERROR", 1);
			return (-1);
		}
		det.idx_letter = 1 + det.idx_percent + i;
		det.conversion = str[det.idx_letter];
		det.flag = ft_substr(str, det.idx_percent + 1, det.idx_letter - det.idx_percent);
		s = ft_substr(str, 0, det.idx_percent);
		ft_putstr_fd(s, 1);
		det.total += ft_strlen(s);
		if (ft_check_flags(&det) < 0)
		{
			ft_putstr_fd("ERROR", 1);
			return (-1);
		}
		free(det.flag);
		free(s);
		current++;
		str = ft_substr(str, det.idx_letter + 1, ft_strlen(str));
	}
	ft_putstr_fd((char *)str, 1);
	det.total += ft_strlen((char *)str);
	if (args > 0)
		free((char *)str);
	va_end(det.ap);
	return(det.total);
}