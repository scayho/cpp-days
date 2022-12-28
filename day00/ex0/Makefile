# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelahce <abelahce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 15:26:20 by abelahce          #+#    #+#              #
#    Updated: 2022/12/27 11:17:15 by abelahce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


all: megaphone

CC=c++

CFLAGS= -Wall -Wextra -Werror -std=c++98

NAME=megaphone

SRC := megaphone.cpp
		

OBJ := $(SRC:.cpp=.o)


%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS)  $(OBJ) -o $(NAME)

clean :
	rm -rf  $(OBJ)

fclean: clean
	rm -rf megaphone

re: fclean all

