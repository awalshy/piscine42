# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awalsh <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/24 16:16:10 by awalsh            #+#    #+#              #
#    Updated: 2017/07/27 16:49:46 by awalsh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ./main.c \
		 ./do_op.c

SOURCEO = ./main.o \
		  ./do_op.o

LIB = libft.a

NAME = do-op

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(LIB)
	gcc $(FLAGS) -o $(NAME) $(SOURCEO) -L. -lft

$(LIB) :
	gcc -c $(SOURCE)
	ar rc libft.a $(SOURCEO)
	ranlib libft.a

libclean :
	/bin/rm -rf $(LIB)

clean :
	/bin/rm -rf $(SOURCEO)

fclean : libclean clean
	/bin/rm -rf $(NAME)

re : fclean all
