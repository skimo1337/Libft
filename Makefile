# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoufakk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/11 02:34:11 by mmoufakk          #+#    #+#              #
#    Updated: 2018/10/25 18:04:15 by mmoufakk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

OBJCTS = *.o

HEAD = libft.h

all : $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(HEAD) -c $(SRC)
	ar rc $(NAME) $(OBJCTS) 

clean:
	/bin/rm -f $(OBJCTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
