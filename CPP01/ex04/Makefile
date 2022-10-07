# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:39:18 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/07 14:49:38 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sedisforlosers
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Sed.cpp
CC = c++
HEADER = Sed.hpp
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