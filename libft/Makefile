SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
NAME = libft.a
CC = gcc
AR = ar
ARFLAGS = -rcs
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

test:
	@bash libft-war-machine/grademe.sh
