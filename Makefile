NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra

FILES = ft_printf.c \
		ft_print_ptr.c \
		helper_function.c \
		ft_printnbr.c \
		ft_put_hex.c \
		ft_print_unsigned.c \
		printf_tools2.c

OFILES = $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OFILES)
	ar -rc $(NAME) $(OFILES)
	
clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all