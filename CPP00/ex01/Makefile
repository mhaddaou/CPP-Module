# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 12:58:35 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/07 11:13:26 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesome
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp get_list.cpp phonebook.cpp contact.cpp
CC = c++
HEADER = phonebook.hpp contact.hpp
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