# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 11:31:03 by ttsubo            #+#    #+#              #
#    Updated: 2024/11/23 17:48:02 by ttsubo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		= libftprintf.a
LIBFT		= libft
LIBFT_BLD	= libft
CC 			= gcc -Wall -Wextra -Werror
SRCS		= srcs/ft_printf.c	srcs/_format_handler.c	srcs/_format_handler2.c

OBJS		= $(SRCS:.c=.o)

ifeq ($(MAKECMDGOALS), debug)
	LIBFT_BLD := libft debug
	CC := gcc -Wall -Wextra -Werror -g
endif

all: $(TARGET)

debug: $(TARGET)

$(TARGET): $(OBJS)
	$(MAKE) -C $(LIBFT_BLD)
	cp $(LIBFT)/libft.a $@
	ar rcs $@ $^

%.o: %.c
	$(CC) -c $< -Iincludes -o $@ 

clean:
	rm -f $(OBJS) $(B_OBJS)
	$(MAKE) clean -C $(LIBFT)

fclean: clean
	rm -f $(TARGET)
	$(MAKE) fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean fclean re debug
