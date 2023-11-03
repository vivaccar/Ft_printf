SRC		=	ft_putstr.c ft_putchar.c ft_printf.c print_type.c \
			ft_printnumber.c ft_print_unsigned.c ft_print_hex.c \
			ft_print_ptr.c

OBJS	= $(SRC:.c=.o)

CC		= cc

NAME	= libftprintf.a

CFLAGS	= -Wall -Wextra -Werror

LIBFTA	= ./Libft/libft.a

LIBFTD	= ./Libft

all: $(NAME)

$(NAME): $(OBJS) $(LIBFTA)
			cp $(LIBFTA) $(NAME)
			ar rcs $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)
			make clean -C $(LIBFTD)

fclean: clean
			rm -f $(NAME) 
			make fclean -C $(LIBFTD)

re: fclean all

$(LIBFTA): $(LIBFTD)
			make -C $(LIBFTD)