# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/19 00:14:30 by mhaddaou          #+#    #+#              #
#    Updated: 2022/08/19 03:49:48 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = get_contact.cpp get_list.cpp get_new_list.cpp phonebook.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

NAME = awesome

all: ${NAME}

${NAME} : ${OBJ}
		${CC} ${FLAGS} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re : fclean all