# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 02:51:41 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/17 02:53:13 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Animal.cpp  
CC = c++
HEADER = include/Animal.hpp 
#include/ScavTrap.hpp include/FragTrap.hpp
RM = rm -rf


%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}  

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re : fclean all