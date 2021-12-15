CFLAGS = -Wall -Wextra -Werror -I ./incs
CC = gcc
EXEC = libftprintf.a

SRCS =  srcs/ft_printf.c \
		srcs/print_conversions/print_c.c \
		srcs/print_conversions/print_s.c \
		srcs/print_conversions/print_p.c \
		srcs/print_conversions/print_x.c \
		srcs/print_conversions/print_X.c \
		srcs/print_conversions/print_i.c \
		srcs/print_conversions/print_ui.c \
		srcs/print_conversions/print_percent.c \

UTILS = srcs/utils/ft_bzero.c \
		srcs/utils/ft_calloc.c \
		srcs/utils/ft_memcpy.c \
		srcs/utils/ft_memset.c \
		srcs/utils/ft_itoa.c \
		srcs/utils/ft_utoa_base.c \
		srcs/utils/ft_lutoa_base.c \
		srcs/utils/ft_strdup.c \
		srcs/utils/ft_strchr.c \
		srcs/utils/ft_strlen.c \

OBJS = $(SRCS:.c=.o) $(UTILS:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
			ar rcs $(EXEC) $(OBJS)

clean:
			rm -f $(OBJS)

fclean: clean
			rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
