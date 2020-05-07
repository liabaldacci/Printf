#include "ft_printf.h"

void	ft_init_struct(t_pf *det)
{
	det->idx_percent = 0;
	det->idx_letter = 0;
	det->flag = "";
	det->conversion = 'a';
	det->temp = 0;
	det->side = 0;
	det->width = 0;
	det->precision = -1; 
	det->padding = ' ';
	det->zero = 0;
	det->spaces = 0;
}