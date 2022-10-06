# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 01:27:24 by mhaddaou          #+#    #+#              #
#    Updated: 2022/10/05 01:36:44 by mhaddaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
 
NAME = Unnecessary_violence

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all