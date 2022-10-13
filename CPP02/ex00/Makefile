# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:15:44 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/13 22:50:26 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = canonicalForm
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Fixed.cpp
CC = c++
HEADER = include/Fixed.hpp
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