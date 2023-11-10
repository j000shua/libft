NAME = libft.a

SRCS = ft_strlen.c \
       ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isascii.c \
       ft_isprint.c \
       ft_toupper.c \
       ft_tolower.c \
       ft_atoi.c \
       ft_strncmp.c \
       ft_strchr.c \
       ft_strrchr.c \
       ft_strnstr.c \
       ft_strdup.c \
       ft_calloc.c \
       ft_bzero.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_strmapi.c \
       ft_striteri.c \
       ft_itoa.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror -include libft.h 

${NAME}:	${OBJS}
	ar -rc ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re
