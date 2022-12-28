# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 15:26:20 by abelahce          #+#    #+#              #
#    Updated: 2022/12/28 15:04:20 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME=zombie

SRC := main.cpp	\
		Zombie.cpp	\
		randomChump.cpp	\
		newZombie.cpp	\

OBJ := $(SRC:.cpp=.o)

HDR := Zombie.hpp

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)


$(NAME):$(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf zombie

re: fclean all

