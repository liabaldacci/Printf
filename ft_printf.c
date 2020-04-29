#include "ft_printf.h"

int			ft_printf(const char *str, ...)
{
	t_pf	det;

	va_start(det.ap, str);
	det.idx_percent = ft_find_char((char *)str, '%');
	det.idx_letter = ft_find_letter((char *)str);
	det.flag = ft_substr(str, det.idx_percent + 1, det.idx_letter);
	if (ft_check_flags(&det) < 0)
		return (-1);
	return(0);
}
