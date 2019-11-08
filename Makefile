STR_DIR			= .
CHAR_DIR		= .
PRINT_DIR		= .
MEM_DIR			= .
MATH_DIR		= .
LIST_DIR		= .

_MATH			= ft_intlen.c ft_itoa.c ft_uitoa.c ft_llitoa.c ft_atoi.c ft_pow.c
_STR			= ft_strcat.c ft_strcpy_free.c ft_strdup.c ft_split.c ft_split_charset.c ft_split_spaces.c ft_strlen.c ft_strnstr.c ft_strcpy.c ft_substr.c ft_strjoin.c ft_strmjoin.c ft_strmapi.c ft_strrchr.c ft_strlcat.c ft_strstr.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_strupcase.c ft_strlowcase.c ft_strcapitalize.c
_CHAR			= ft_isalpha.c ft_isascii.c ft_tolower.c ft_toupper.c ft_islower.c ft_isupper.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isspace.c
_PRINT			= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
_MEM			= ft_memdel.c ft_memcmp.c ft_bzero.c ft_memcpy.c ft_calloc.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memset.c
_LIST			= ft_lstdelone.c ft_lstnew.c ft_lstadd_back.c ft_lstiter.c ft_lstsize.c ft_lstclear.c ft_lstprint.c ft_lstmap.c ft_lstadd_front.c ft_lstlast.c

STR				= $(addprefix $(STR_DIR)/, $(_STR))
CHAR			= $(addprefix $(CHAR_DIR)/, $(_CHAR))
PRINT			= $(addprefix $(PRINT_DIR)/, $(_PRINT))
MEM				= $(addprefix $(MEM_DIR)/, $(_MEM))
MATH			= $(addprefix $(MATH_DIR)/, $(_MATH))
LIST			= $(addprefix $(LIST_DIR)/, $(_LIST))

SRCS			= $(STR) $(CHAR) $(PRINT) $(MEM) $(MATH) $(LIST)
OBJS			= $(SRCS:.c=.o)

INCLUDES_DIR	= .

CFLAGS			= -Wall -Wextra -Werror -I $(INCLUDES_DIR)

CC				= clang

AR				= ar rc

RM				= rm -f

NAME			= libft.a

$(NAME):		$(OBJS) libft.h
				$(AR) $(NAME) $(OBJS)

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re 
