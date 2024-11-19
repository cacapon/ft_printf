NAME = libftprintf.a

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)