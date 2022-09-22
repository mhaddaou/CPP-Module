# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/06 00:27:54 by mhaddaou          #+#    #+#              #
#    Updated: 2022/08/20 00:18:52 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
OBJ = ${SRC:.cpp=.o}


CC = clang++
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = megaphone

ALL: ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}
fclean: clean
	${RM} ${NAME}
	
re: fclean ALL 