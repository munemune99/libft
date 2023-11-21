CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

INC = libft.h

SRCS =	ft_atoi.c \
	ft_isdigit.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strtrim.c \
	ft_bzero.c \
	ft_isprint.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_substr.c \
	ft_calloc.c \
	ft_itoa.c \
	ft_putchar_fd.c \
	ft_strdup.c \
	ft_strmapi.c \
	ft_tolower.c \
	ft_isalnum.c \
	ft_memchr.c \
	ft_putendl_fd.c \
	ft_striteri.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_isalpha.c \
	ft_memcmp.c \
	ft_putnbr_fd.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_isascii.c \
	ft_memcpy.c \
	ft_putstr_fd.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_split.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

OFILES = $(SRCS:.c=.o)

1FILES = $(BONUS:.c=.o)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OFILES) $(INC)
	ar -rcs $(NAME) $(OFILES)

bonus: $(INC) $(1FILES)
	ar -rcs $(NAME) $(0FILES) $(1FILES)

clean:
	rm -f $(OFILES) $(1FILES)

fclean: clean 
	rm -f $(NAME)

re: fclean $(NAME)

PHONY:  all clean fclean re
