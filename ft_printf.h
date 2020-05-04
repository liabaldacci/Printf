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
	int			side; /* 0 é direita // 1 é esquerda */
	int			width; /* número antes do ponto, tem a ver com o número total de caracteres impressos */
	int			precision; /* número depois do ponto, tem a ver com o número de caracteres impressos da variável */
}				t_pf;

int				ft_printf(const char *str, ...);
int				ft_find_letter(char *str);
int				ft_find_percent(char *str);
int				ft_find_char(char *str, char c);
int				ft_check_flags(t_pf *det);
int				ft_star(t_pf *det);
int				ft_negative(t_pf *det);
int				ft_width(t_pf *det);
int				ft_precision(t_pf *det);
#endif
