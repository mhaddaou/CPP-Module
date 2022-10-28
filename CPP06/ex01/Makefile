# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 07:08:02 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/28 07:09:38 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cast
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Reinterpret.cpp
CC = c++
HEADER = include/Reinterpret.hpp
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