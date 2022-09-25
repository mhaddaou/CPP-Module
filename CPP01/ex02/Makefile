# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 12:15:01 by mhaddaou          #+#    #+#              #
#    Updated: 2022/09/25 12:42:48 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
RM = rm -rf
FLAGS = -Wall -Wextra -Werror

NAME = Brain


all: ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME}

re: fclean all