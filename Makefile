# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallada <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 12:49:49 by dvallada          #+#    #+#              #
#    Updated: 2025/10/24 12:50:29 by dvallada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
