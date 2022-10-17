# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 02:51:41 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/17 17:43:48 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Animal.cpp src/Cat.cpp src/Dog.cpp src/WrongCat.cpp src/WrongAnimal.cpp src/Brain.cpp
CC = c++
HEADER = includes/Animal.hpp includes/Cat.hpp includes/Dog.hpp includes/WrongCat.hpp includes/WrongAnimal.hpp includes/Brain.hpp
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