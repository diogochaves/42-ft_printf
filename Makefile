CC		:=	gcc
FLAGS	:=	-Wall -Wextra -Werror -g
RM		:=	rm -f

NAME	:=	libftprintf.a
LIBFT	:=	./libft/libft.a

SRCS	:=	ft_printf.c
OBJS	:=	$(SRCS:%.c=%.o)

#all:	$(NAME)
all:	test

$(NAME):$(LIBFT) $(OBJS)
		ar -rc $(NAME) $(OBJS)

$(LIBFT):
		make -C libft
		cp $(LIBFT) $(NAME)

%.o:	%.c
		$(CC) $(CFLAGS) -c -o $@ $< -I ./libft

clean:
		make clean -C libft
		$(RM) $(OBJS)

fclean:	clean
		make fclean -C libft
		$(RM) $(NAME)

re:		fclean all

test:	$(LIBFT) $(OBJS)
		$(CC) $(CFLAGS) main.c $(OBJS) $(NAME) -I ./libft

.PHONY: all clean fclean re bonus test
