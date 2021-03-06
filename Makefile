CC		:=	gcc
FLAGS	:=	-Wall -Wextra -Werror -g
RM		:=	rm -f

NAME	:=	libftprintf.a
LIBFT	:=	./libft/libft.a

SRCS	:=	ft_printf.c \
			ft_print_strings.c \
			ft_print_numbers.c \
			ft_print_hex_pointers.c

OBJS	:=	$(SRCS:%.c=%.o)

all:	$(NAME)

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

re:		fclean all

test:	$(LIBFT) $(OBJS)
		$(CC) $(FLAGS) main.c $(OBJS) $(NAME) -I ./libft

tclean:	fclean
		$(RM) a.out

.PHONY: all clean fclean re bonus test tclean
