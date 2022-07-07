# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroth <jroth@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 11:33:54 by jroth             #+#    #+#              #
#    Updated: 2022/07/07 14:15:59 by jroth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

FLAGS = -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow

.cpp.o:
	c++ $(FLAGS) -c $< -o ${<:.cpp=.o}

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: clean fclean $(NAME)