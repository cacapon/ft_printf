# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 11:31:03 by ttsubo            #+#    #+#              #
#    Updated: 2024/11/20 11:33:05 by ttsubo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
GCC		= gcc -Wall -Wextra -Werror
INCDIR	= ./inclides
SRCDIR	= ./srcs
LIBFT	= $(SRCDIR)/libft

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	make clean -C ./libft

fclean: clean
	rm -f $(NAME)
	make fclean -C ./libft