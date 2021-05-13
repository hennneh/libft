NAME = libft.a

COMPILER = gcc

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

FILES =	ft_memset.c
		ft_bzero.c
		ft_memcpy.c
		ft_memccpy.c
		ft_memmove.c
		ft_memchr.c
		ft_memcmp.c
		ft_strlen.c
		ft_strlcpy.c
		ft_strlcat.c
		ft_strchr.c
		ft_strrchr.c
		ft_strnstr.c
		ft_strncmp.c
		ft_atoi.c
		ft_isalpha.c
		ft_isdigit.c
		ft_isalnum.c
		ft_isascii.c
		ft_isprint.c
		ft_toupper.c
		ft_tolower.c

:all $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $^
	ranlib $(NAME)

bonus: $(OBJBONUS)
	ar rc $(NAME) $^
	ranlib $(NAME)

clean:
	rm -f $(OBJBONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
