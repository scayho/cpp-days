# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 15:26:20 by abelahce          #+#    #+#              #
#    Updated: 2022/12/27 11:19:34 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


all: contact

CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME=contact

SRC := main.cpp
		

OBJ := $(SRC:.cpp=.o)

HDR := phonebook.h

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf contact

re: fclean all

