# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroth <jroth@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/20 11:33:54 by jroth             #+#    #+#              #
#    Updated: 2022/06/28 18:27:21 by jroth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

SRC = ClapTrap.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

.cpp.o:
	c++ $(FLAGS) -c $< -o ${<:.cpp=.o}

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: clean fclean $(NAME)