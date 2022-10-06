# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 12:58:35 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/04 22:24:24 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = get_contact.cpp get_list.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
HEADER = phonebook.hpp
RM = rm -rf
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = awesome

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
	${CC} ${FLAGS} -o ${NAME} ${OBJ} 

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re : fclean all