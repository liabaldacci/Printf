NAME = libftprintf.a

FILES = ft_printf.c ft_find_letter.c ft_find_char.c ft_check_flags.c ft_star.c \
		ft_negative.c ft_width.c ft_precision.c ft_init_struct.c ft_padding.c \
		ft_conversion.c ft_printf_s.c ft_printf_c.c ft_printf_d.c ft_put_zero.c \
		ft_int_formatting.c ft_print_int.c ft_itoa_base.c ft_printf_p.c ft_printf_u.c \
		ft_printf_percent.c ft_count_args.c

OBJ = $(subst .c,.o,$(FILES))

LIBDIR = ./Libft

OBJLIB = $(LIBDIR)/*.o

HEADER = ft_printf.h

FLAG = -Wall -Werror -Wextra -g -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ) $(LIBDIR)/libft.a
	ar rc $(NAME) $(OBJ) $(OBJLIB)
	ranlib $(NAME)

.o: .c
	gcc -c $(FLAG) $(FILES) -I $(HEADER)

$(LIBDIR)/libft.a:
	$(MAKE) -C $(LIBDIR)

test: $(NAME)
	gcc $(FLAG) main.c $(FILES) $(NAME)
	./a.out

clean:
	rm -f $(OBJ) $(OBJLIB)

fclean: clean
	rm -f $(NAME)
	rm -f ./Libft/libft.a
	rm -f a.out

re: fclean all
