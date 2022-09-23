# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psychom <psychom@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 00:14:30 by mhaddaou          #+#    #+#              #
#    Updated: 2022/09/23 07:02:25 by psychom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = get_contact.cpp get_list.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
HEADER = phonebook.hpp
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

NAME = awesome

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
		${CC} ${FLAGS} -o ${NAME} ${OBJ} 

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re : fclean all