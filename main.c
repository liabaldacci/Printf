#include "ft_printf.h"

int	main()
{
	 char	*name = "Lia and Nat s2";
	printf("Hello, %-----------*.*s", 20, 8, name);
	//printf("|%0s|", name);
}
