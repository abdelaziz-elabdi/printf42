# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-abdi <ael-abdi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 18:05:44 by ael-abdi          #+#    #+#              #
#    Updated: 2023/12/08 18:05:47 by ael-abdi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
CC = cc
AR = ar -crs
CFLAGS = -Wall -Wextra -Werror
NFILES = ft_printf.c ft_putstr.c ft_putchar.c ft_putnbr.c\
		ft_upper_hexa.c ft_lower_hexa.c ft_put_unsign.c\
		ft_put_ptr.c ft_put_addr.c
OFILES = $(NFILES:.c=.o)
all : $(NAME)

$(NAME): $(OFILES)
	$(AR) $(NAME) $(OFILES)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OFILES)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
