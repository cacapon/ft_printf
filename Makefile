# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttsubo <ttsubo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 11:31:03 by ttsubo            #+#    #+#              #
#    Updated: 2024/11/20 12:25:35 by ttsubo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET	= libftprintf.a
LIBFT	= libft
CC 		= gcc -Wall -Wextra -Werror
SRCS	= srcs/ft_printf.c

OBJS	= $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(MAKE) -C $(LIBFT)
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

.PHONY: all clean fclean re