CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_display_file.c
OBJS = $(SRCS:.c=.o)
NAME = ft_display_file

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o:%.c
	$(CC) -o $@ -c $< $(FLAGS)

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re: fclean all