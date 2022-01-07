CC		:=	gcc
FLAGS	:=	-Wall -Wextra -Werror -g
RM		:=	rm -f

NAME	:=	libftprintf.a
LIBFT	:=	./libft/libft.a

SRCS	:=	ft_printf.c \
			ft_parse_strings.c \
			ft_parse_numbers.c \
			ft_parse_hex_pointers.c

OBJS	:=	$(SRCS:%.c=%.o)

#all:	$(NAME)
all:	test

lib: $(NAME)

$(NAME):$(LIBFT) $(OBJS)
		ar -rc $(NAME) $(OBJS)

$(LIBFT):
		make -C libft
		cp $(LIBFT) $(NAME)

%.o:	%.c
		$(CC) $(FLAGS) -c -o $@ $< -I ./libft

clean:
		make clean -C libft
		$(RM) $(OBJS)

fclean:	clean
		make fclean -C libft
		$(RM) $(NAME)
		$(RM) main.o

re:		fclean all

test:	$(LIBFT) $(OBJS)
		$(CC) $(FLAGS) main.c $(OBJS) $(NAME) -I ./libft

.PHONY: all clean fclean re bonus test
