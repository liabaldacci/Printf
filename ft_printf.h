#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

typedef struct	s_params
{
	va_list		ap;
    int			idx_percent;
	int			idx_letter;
	char		*flag;
	int			temp;
	/* 0 é direita // 1 é esquerda */
	int			side;
}				t_pf;

int				ft_printf(const char *str, ...);
int				ft_find_letter(char *str);
int				ft_find_percent(char *str);
int				ft_find_char(char *str, char c);
int				ft_check_flags(t_pf *det);
#endif
