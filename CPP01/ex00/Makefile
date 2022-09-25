# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 12:57:07 by mhaddaou          #+#    #+#              #
#    Updated: 2022/09/24 14:16:20 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = src/main.cpp src/Zombie.cpp src/newZombie.cpp src/randomChump.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = include/Zombie.hpp

NAME = Zombie

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
		${CC} ${FLAGS} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re : fclean all