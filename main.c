#include "ft_printf.h"

int	main()
{
	//int age = -21;
	ft_printf("I am 100%10% sure that my name is %-5s.", "lia");
	printf("\n");
	printf("I am 100%10% sure that my name is %-5s.", "lia");
	// %[flags][width][.precision][length]specifier

	// %s
	// maximo len(str)
	// 0 não imprime | undefined behavior
	// printf("%%s\n");
	// printf("---------------------------------------------------------\n");
	// printf("[width]s\n");
	// //width < len .: width = len
	// //width > len .: width = width - len
	// printf("---------------------------------------------------------\n");
	// printf("I am |%10s| years old\n", "teste");
	// printf("I am |%3s| years old\n", "teste");
	// printf("I am |%s| years old\n", "teste");
	// printf("---------------------------------------------------------\n");
	// printf("[.]s\n");
	// // precision > len .: precision = len
	// // precision < len .: len = precision, a palavra é cortada começando da esquerda (sempre)
	// printf("---------------------------------------------------------\n");
	// printf("I am |%.10s| years old\n", "teste");
	// printf("I am |%.3s| years old\n", "teste");
	// printf("I am |%.0s| years old\n", "teste");
	// printf("---------------------------------------------------------\n");
	// printf("[width][.]s\n");
	// // precision >< len .: espaços = width-precision
	// // alinha o texto à direita
	// printf("---------------------------------------------------------\n");
	// printf("I am |%20.10s| years old\n", "teste");
	// printf("I am |%20.3s| years old\n", "teste");
	// printf("I am |%20.0s| years old\n", "teste");
	// printf("---------------------------------------------------------\n");
	// printf("[-][width][.]s\n");
	// // precision >< len .: espaços = width-precision
	// // alinha o texto à esquerda
	// printf("---------------------------------------------------------\n");
	// printf("I am |%-20.10s| years old\n", "teste");
	// printf("I am |%-20.3s| years old\n", "teste");
	// printf("I am |%-20.0s| years old\n", "teste");


}
