# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou < mhaddaou@student.1337.ma>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 14:32:24 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/24 15:30:34 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
# FLAGS = -Wall -Wextra -Werror
SRC = src/main.cpp src/Bureaucrat.cpp src/Form.cpp src/ShrubberyCreationForm.cpp src/RobotomyRequestForm.cpp src/PresidentialPardonForm.cpp src/Intern.cpp
CC = c++
HEADER = includes/Bureaucrat.hpp includes/Form.hpp includes/ShrubberyCreationForm.hpp includes/RobotomyRequestForm.hpp includes/PresidentialPardonForm.hpp includes/Intern.hpp
RM = rm -rf
FILE = *_shrubbery;

%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}  

clean:
	${RM} ${OBJ}
	
fclean: clean
	${RM} ${NAME} ${FILE}

re : fclean all