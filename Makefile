SOURCES := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		   ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		   ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		   ft_calloc.c ft_strdup.c ft_substr.c

OBJECTS := $(SOURCES:.c=.o)

CC := cc
CFLAGS := -Wall -Wextra -Werror

NAME := libft.a
TESTNAME := testft

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $@ $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -I. -c $< -o $@

.PHONY: clean fclean re
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(TESTNAME): main.c $(NAME) libft.h
	$(CC) $(CFLAGS) -I. $< -L. -lft -o $@

.PHONY: norm cleantest
norm:
	norminette -R CheckForbiddenSourceHeader -R CheckDefine


cleantest: fclean
	rm -f $(TESTNAME)
