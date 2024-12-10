CC = cc 
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

CFILES = ft_printf.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_puthex.c \
	ft_puthex_upper.c \
	ft_putunsigned.c \
	ft_putstr.c ft_putptr.c

OBJF = $(CFILES:.c=.o)

all : $(NAME)

$(NAME): $(OBJF)
	ar -rcs $(NAME) $(OBJF) 

clean :
	rm -f $(OBJF)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re 
