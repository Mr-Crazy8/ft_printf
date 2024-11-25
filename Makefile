
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c format_c.c format_d_i.c format_p.c format_s.c format_u.c format_X_x.c format_s.c ft_strlen.c ft_putnbr.c 
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $^

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean