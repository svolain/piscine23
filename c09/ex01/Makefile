NAME = libft.a

SRCS = srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strcmp.c \
			srcs/ft_strlen.c \
			srcs/ft_swap.c 

HEAD = includes

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
		cc $(FLAGS) -c $< -o $@ -I $(HEAD)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
