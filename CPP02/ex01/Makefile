# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/08 20:18:04 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/13 22:50:53 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = canonical
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp
CC = c++
HEADER = Fixed.hpp
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