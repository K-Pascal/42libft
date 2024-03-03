FILE		:=	ft_isalpha.c		\
				ft_isdigit.c		\
				ft_isalnum.c		\
				ft_isascii.c		\
				ft_isprint.c		\
				ft_strlen.c			\
				ft_memset.c			\
				ft_bzero.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_strlcpy.c		\
				ft_strlcat.c		\
				ft_toupper.c		\
				ft_tolower.c		\
				ft_strchr.c			\
				ft_strrchr.c		\
				ft_strncmp.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_strnstr.c		\
				ft_atoi.c			\
				ft_calloc.c			\
				ft_strdup.c			\
				ft_substr.c			\
				ft_strjoin.c		\
				ft_strtrim.c		\
				ft_split.c			\
				ft_itoa.c			\
				ft_strmapi.c		\
				ft_striteri.c		\
				ft_putchar_fd.c		\
				ft_putstr_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\
				ft_free_all.c
SRC_PATH	:=	src
SRC			:=	$(addprefix $(SRC_PATH)/,$(FILE))

GNL_FILE	:=	get_next_line.c
GNL_PATH	:=	gnl
GNL_SRC		:=	$(addprefix $(GNL_PATH)/,$(GNL_FILE))

OBJ_PATH	:=	build
OBJ			:=	$(addprefix $(OBJ_PATH)/,$(FILE:.c=.o)) $(addprefix $(OBJ_PATH)/,$(GNL_FILE:.c=.o))

CC		?=	cc
CFLAGS	?=	-Wall -Wextra -Werror
GDB		?=

AR		:=	ar
ARFLAGS	:=	crvs

RM		:=	rm -f

NAME	:=	libft.a

.PHONY: all bonus
all: $(NAME)

bonus: all

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_PATH)
	$(CC) $(CFLAGS) $(GDB) -I. -c $< -o $@

$(OBJ_PATH)/%.o: $(GNL_PATH)/%.c | $(OBJ_PATH)
	$(CC) $(CFLAGS) $(GDB) -c $< -o $@

$(OBJ_PATH):
	mkdir -p $@

.PHONY: clean fclean re
clean:
	$(RM) -r $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: norm
norm:
	norminette -R CheckForbiddenSourceHeader $(SOURCES)
	norminette -R CheckDefine libft.h
