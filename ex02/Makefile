# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroth <jroth@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 11:33:54 by jroth             #+#    #+#              #
#    Updated: 2022/06/23 18:25:45 by jroth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

$(NAME):
	c++ -Wall -Werror -Wextra -std=c++98 -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

re: clean $(NAME)