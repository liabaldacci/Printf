#include "ft_printf.h"

int			ft_printf(const char *str, ...)
{
	t_pf	det;
	int		i;
	char	*s;

	ft_init_struct(&det);
	va_start(det.ap, str);
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
	if (ft_check_flags(&det) < 0)
	{
		ft_putstr_fd("ERROR", 1);
		return (-1);
	}
	free(det.flag);
	free(s);
	//str = ft_substr(str, det.idx_letter, ft_strlen(str));
	// ft_putstr_fd(det.flag, 1);
	// ft_putstr_fd("\nWIDTH: ", 1);
	// ft_putnbr_fd(det.width, 1);
	// ft_putstr_fd("\nPRECISION: ", 1);
	// ft_putnbr_fd(det.precision, 1);
	return(0);
}
