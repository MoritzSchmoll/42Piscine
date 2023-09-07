CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
INCL = ./includes/

all: libft.a

libft.a:$(OBJS)
	ar -rcs libft.a $(OBJS)

%.o:%.c
	$(CC) -o $@ -c -I $(INCL) $< $(FLAGS)

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f libft.a

re: fclean all