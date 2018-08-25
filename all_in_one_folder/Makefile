# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awalsh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/21 12:55:31 by awalsh            #+#    #+#              #
#    Updated: 2017/07/27 16:13:56 by awalsh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ./srcs/ft_putchar.c \
		 ./srcs/ft_swap.c \
	   	 ./srcs/ft_putstr.c \
		 ./srcs/ft_strcmp.c \
		 ./srcs/ft_strlen.c

SOURCEO = ./ft_putchar.o \
		./ft_putstr.o \
		./ft_strcmp.o \
		./ft_strlen.o \
		./ft_swap.o


LIB = ./libft.a

all : $(LIB)

$(LIB) :
	gcc -c $(SOURCE)
	ar rc libft.a $(SOURCEO)
	ranlib libft.a

clean :
	/bin/rm -f $(SOURCEO)

fclean : clean
	/bin/rm -f $(LIB)

re : fclean all
