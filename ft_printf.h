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
	int			temp;
	int			side; /* 0 é direita // 1 é esquerda */
	int			width; /* número antes do ponto, tem a ver com o número total de caracteres impressos */
	int			precision; /* número depois do ponto, tem a ver com o número de caracteres impressos da variável */
	int			zero; /* se tme a flag zero */
	char		*flag;
	char		conversion; /* a conversão da flag como csdiuxX */
	char		padding; /* qual é o padding */
	int			spaces; /*número de espaços que serão impressos caso tenha width*/
	int			prec_zeros;
	int			total;
	int			negative;
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
void			ft_init_struct(t_pf *det);
int				ft_padding(t_pf *det);
int				ft_conversion(t_pf *det);
int				ft_printf_s(t_pf *det);
int				ft_printf_c(t_pf *det);
int				ft_printf_d(t_pf *det);
void			ft_put_zero(int n);
int				ft_print_int(t_pf *det, char *number);
int				ft_int_formatting(t_pf *det, int len, int i);
char			*ft_itoa_base(size_t nb, int base, char updown);
int				ft_printf_p(t_pf *det);
int				ft_printf_u(t_pf *det);
int				ft_printf_percent(t_pf *det);
int				ft_count_args(char *str);
int				ft_printf_xX(t_pf *det);
int				ft_print_pointer(t_pf *det, char *number);
char			*ft_itoa(long n);
#endif
