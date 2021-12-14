CC		:=	gcc
FLAGS	:=	-Wall -Wextra -Werror -g
RM		:=	rm -f

NAME	:=	libftprintf.a
LIBFT	:=	./libft/libft.a

SRCS	:=	ft_printf.c
OBJS	:=	$(SRCS:%.c=%.o)

all:	$(NAME)

$(NAME): $(LIBFT) $(OBJS)
		ar -rc $(NAME) $(OBJS)

$(LIBFT):
		make -C libft
		cp $(LIBFT) $(NAME)

clean:

fclean:	clean
		$(RM) $(NAME)
re:
