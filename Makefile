SOURCES := ft_isalpha.c ft_isdigit.c ft_isalnum.c
OBJECTS := $(SOURCES:.c=.o)

CC := cc
CFLAGS := -Wall -Wextra -Werror

NAME := libft.a

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -I . -c $< -o $@

.PHONY: clean fclean re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean
