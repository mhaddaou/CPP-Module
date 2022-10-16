# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/16 02:56:19 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/16 15:47:50 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Inheritance
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/ClapTrap.cpp src/main.cpp src/ScavTrap.cpp src/FragTrap.cpp
CC = c++
HEADER = include/ClapTrap.hpp include/ScavTrap.hpp include/FragTrap.hpp
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