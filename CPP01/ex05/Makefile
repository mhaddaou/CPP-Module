# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 17:04:31 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/07 17:05:10 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp
CC = c++
HEADER = Harl.hpp
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