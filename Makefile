
SRCS_DIR		= srcs

_SRCS			= ft_atoi.c ft_isalpha.c ft_itoa.c ft_lstdelone_bonus.c ft_lstnew_bonus.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strdup.c ft_strlen.c ft_strnstr.c ft_substr.c ft_bzero.c ft_isascii.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstsize_bonus.c ft_memcpy.c ft_putendl_fd.c ft_split_charset.c ft_strjoin.c ft_strmapi.c ft_strrchr.c ft_tolower.c ft_calloc.c ft_isdigit.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_memccppy.c ft_memmove.c ft_putnbr_fd.c ft_split_spaces.c ft_strlcat.c ft_strmjoin.c ft_strstr.c ft_toupper.c ft_isalnum.c ft_isprint.c ft_lstclear_bonus.c ft_lstmap_bonus.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c

SRCS			= $(addprefix ${SRCS_DIR}/, ${_SRCS})

_OBJS			= ${_SRCS:.c=.o}

OBJS			= ${SRCS:.c=.o}

INCLUDES_DIR	= includes

CFLAGS			= -Wall -Wextra -Werror -I ${INCLUDES_DIR}

GCC				= gcc

AR				= ar rc

RM				= rm -f

NAME			= libft.a

${NAME}:		${OBJS}
				${AR} ${NAME} ${OBJS}

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
