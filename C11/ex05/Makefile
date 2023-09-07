CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_putnbr.c ft_atoi.c main.c main2.c
OBJS = $(SRCS:.c=.o)

all: $(SRCS)
	$(CC) -o do-op $(SRCS)

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f do-op

re: fclean all