NAME = libftprintf.a

FILES = ft_printf.c ft_find_letter.c ft_find_char.c

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

re: fclean all
