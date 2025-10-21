NAME = libftprintf.a

LIBFT = libft/libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRCS =	ft_printf.c
	
OBJS = $(SRCS:.c=.o)

all: libft $(NAME) 

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT):
	@$(MAKE) -C libft


%.o: %.c
	$(CC) -c  $< -o $@ 

clean:
	rm -rf $(OBJS)
	@$(MAKE)  clean -C libft

fclean: clean
	rm -rf $(NAME)
	@$(MAKE)  fclean -C libft

re: fclean all

.PHONY: all clean fclean re
