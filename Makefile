# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbisson <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 20:26:32 by lbisson           #+#    #+#              #
#    Updated: 2021/12/16 21:15:58 by lbisson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror -I ./incs
CC = gcc
EXEC = libftprintf.a

SRCS =  srcs/ft_printf.c \
		srcs/print_conversions/print_char.c \
		srcs/print_conversions/print_str.c \
		srcs/print_conversions/print_address.c \
		srcs/print_conversions/print_hexa_lowercase.c \
		srcs/print_conversions/print_hexa_uppercase.c \
		srcs/print_conversions/print_int.c \
		srcs/print_conversions/print_unsigned_int.c \
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
