NAME = libftprintf.a

# SOURCES

SRC = 	./utils.c	\
		./utils1.c       \
		./parser.c 	\
		./parser1.c \
		./putnb.c 	\
		./putnb1.c 	\
		./putchar.c     \
		./putstr.c      \
		./putdbl.c      \
		./putdbl1.c     \
		./putptr.c      \
		./ft_printf.c 	\
		./ldtobi.c	\
		./ldtoln.c      \
		./ldtoln1.c     \

# OBJECTS

OBJS = $(SRC:.c=.o)

# HEADERS

HDRS = ft_printf.h

# COLORS

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I $(HDRS) $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
    @echo "\n$(NAME): $(GREEN)$(NAME) was created$(RESET)"

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

