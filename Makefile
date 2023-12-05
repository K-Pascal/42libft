SOURCES := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		   ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \

OBJECTS := $(SOURCES:.c=.o)

CC := cc
CFLAGS := -Wall -Wextra -Werror

NAME := libft.a
TESTNAME := testft

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(TESTNAME): $(NAME) libft.h
	$(CC) $(CFLAGS) -I. -L. -lft main.c -o $@

.PHONY: norm cleantest
norm:
	norminette -R CheckForbiddenSourceHeader -R CheckDefine


cleantest:
	rm -f $(TESTNAME)
