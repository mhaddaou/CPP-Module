# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 14:32:24 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/25 02:13:51 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
FLAGS = -Wall -Wextra -Werror
SRC = src/main.cpp src/Bureaucrat.cpp src/Form.cpp
CC = c++
HEADER = includes/Bureaucrat.hpp includes/Form.hpp
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