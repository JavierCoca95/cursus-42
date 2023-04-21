NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC := ft_strlcpy.c\
ft_atoi.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isdigit.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c
OBJS := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all clean fclean
