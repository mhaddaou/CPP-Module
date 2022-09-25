# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 14:44:33 by mhaddaou          #+#    #+#              #
#    Updated: 2022/09/24 14:53:02 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/main.cpp src/Zombie.cpp src/zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

RM = rm -rf
CC = clang++
FLAGS = -Wall -Wextra -Werror

NAME = zombieHorde
HEADER = include/Zombie.hpp

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
		${CC} ${FLAGS} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re: fclean all