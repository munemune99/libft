CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

INC = libft.h

SRCS =	atoi \
	isdigit \
	memmove \
	strlcpy \
	strtrim \
	bzero \
	isprint \
	memset \
	strchr \
	strlen \
	substr \
	calloc \
	itoa \
	putchar_fd \
	strdup \
	strmapi \
	tolower \
	isalnum \
	memchr \
	putendl_fd \
	striteri \
	strncmp \
	toupper \
	isalpha \
	memcmp \
	putnbr_fd \
	strjoin \
	strnstr \
	isascii \
	memcpy \
	putstr_fd \
	strlcat \
	strrchr \
	split

BONUS = lstnew_bonus \
		lstadd_front_bonus \
		lstsize_bonus \
		lstlast_bonus \
		lstadd_back_bonus \
		lstdelone_bonus \
		lstclear_bonus \
		lstiter_bonus \
		lstmap_bonus

0FILES = $(SRCS:%=ft_%.o)

1FILES = $(BONUS:%=ft_%.o)

AR = ar -rc

$(NAME): $(0FILES) $(INC)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

all: $(NAME)

bonus: $(NAME) $(1FILES) $(INC)

clean:
	rm -f $(0FILES) $(1FILES)

fclean: clean 
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY:  all clean fclean re bonus
