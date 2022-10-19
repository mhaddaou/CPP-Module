# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 14:32:24 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/19 14:33:45 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Bureaucrat.cpp
CC = c++
HEADER = include/Bureaucrat.hpp
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