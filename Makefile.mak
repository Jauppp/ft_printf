# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile.mak                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdomet-d <cdomet-d@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 15:00:10 by cdomet-d          #+#    #+#              #
#    Updated: 2023/11/26 15:00:10 by cdomet-d         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

CC = gcc
CFLAGS = -Werror -Wextra -Wall

SRCS := ft_print_chars.c \
		main_printf.c \ 
		ft_print_flags.c \
		ft_print_nums.c \
		ft_printf.c \
		ft_putnbrs.c \
		ft_print_nums.c

OBJS := $(SRCS:%.c=%.o)

RM := rm -rf

all: $(NAME)

$(NAME): $(OBJS) ft_printf.h
	ar -rcs $(NAME) $(OBJS) 

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean: 
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY : clean fclean all re