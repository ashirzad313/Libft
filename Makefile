# COMPILER
GCC = cc
# FLAGS FOR COMPILATION
FLAGS = -Wall -Wextra -Werror
# LIBRARY NAME
NAME = libft.a
# LIST OF SOURCE FILES
SRCS = src/ft_atoi.c src/ft_bzero.c src/ft_calloc.c src/ft_isalnum.c src/ft_isalpha.c src/ft_isascii.c src/ft_isdigit.c src/ft_isprint.c \
    src/ft_memchr.c src/ft_memcmp.c src/ft_memcpy.c src/ft_memmove.c src/ft_memset.c \
    src/ft_strchr.c src/ft_strdup.c src/ft_strlcat.c src/ft_strlcpy.c \
    src/ft_strlen.c src/ft_strncmp.c src/ft_strnstr.c src/ft_strrchr.c src/ft_tolower.c src/ft_toupper.c src/ft_substr.c src/ft_strjoin.c \
    src/ft_strtrim.c src/ft_split.c src/ft_itoa.c src/ft_strmapi.c src/ft_striteri.c src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_putendl_fd.c \
	src/ft_putnbr_fd.c
# OBJECT FILES
OBJS = $(SRCS:.c=.o)
# ALL RULE
# RULES TO MAKE A LIBRARY
all: $(NAME)

%.o: %.c
	$(GCC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# RULES FOR CREATING OBJECT FILES
clean:
	rm -f $(OBJS)
# RULES TO CLEAN EVERYTHING
fclean: clean
	rm -f $(NAME)
# RULES FOR RECOMPILATION
re: fclean all

.PHONY: all clean fclean re
