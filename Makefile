STR_DIR			= .
CHAR_DIR		= .
PRINT_DIR		= .
MEM_DIR			= .
MATH_DIR		= .
BONUS_DIR		= .

_MATH			= ft_itoa.c ft_atoi.c
_STR			= ft_strdup.c ft_split.c ft_split_charset.c ft_split_spaces.c ft_strlen.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_strmjoin.c ft_strmapi.c ft_strrchr.c ft_strlcat.c ft_strstr.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strtrim.c ft_strupcase.c ft_strlowcase.c ft_strcapitalize.c
_CHAR			= ft_isalpha.c ft_isascii.c ft_tolower.c ft_toupper.c ft_islower.c ft_isupper.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isspace.c
_PRINT			= ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
_MEM			= ft_memcmp.c ft_bzero.c ft_memcpy.c ft_calloc.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memset.c
_BONUS			= ft_lstdelone_bonus.c ft_lstnew_bonus.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstsize_bonus.c ft_lstclear_bonus.c ft_lstprint_bonus.c ft_lstmap_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c

STR				= $(addprefix $(STR_DIR)/, $(_STR))
CHAR			= $(addprefix $(CHAR_DIR)/, $(_CHAR))
PRINT			= $(addprefix $(PRINT_DIR)/, $(_PRINT))
MEM				= $(addprefix $(MEM_DIR)/, $(_MEM))
MATH			= $(addprefix $(MATH_DIR)/, $(_MATH))
BONUS			= $(addprefix $(BONUS_DIR)/, $(_BONUS))

SRCS			= $(STR) $(CHAR) $(PRINT) $(MEM) $(MATH)
OBJS			= $(SRCS:.c=.o)
BONUS_OBJS		= $(BONUS:.c=.o)

INCLUDES_DIR	= .

CFLAGS			= -Wall -Wextra -Werror -I $(INCLUDES_DIR)

CC				= gcc

AR				= ar rc

RM				= rm -f

NAME			= libft.a

$(NAME):		$(OBJS) libft.h
				$(AR) $(NAME) $(OBJS)

all:			$(NAME)

bonus:			all $(BONUS_OBJS)
				$(AR) $(NAME) $(BONUS_OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re 
