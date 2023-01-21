NAME = libft.a

CC		= gcc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isdigit.c ft_memset.c ft_isprint.c \
ft_atoi.c  \
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c \
ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c \
ft_memcmp.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c \

BONUS = 

OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

bonus:	${OBJSBONUS}
		ar rcs ${NAME} ${OBJSBONUS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: clean fclean all re