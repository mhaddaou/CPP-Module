# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 03:45:17 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/28 13:01:59 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = realType
# FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = src/main.cpp src/Base.cpp
CC = c++
HEADER = includes/Base.hpp includes/Classes.hpp
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