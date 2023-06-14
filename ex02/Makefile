# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grenaud- <grenaud-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 11:00:00 by grenaud-          #+#    #+#              #
#    Updated: 2023/06/13 16:33:53 by grenaud-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME  = FragTrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
HEADER = ScavTrap.hpp ClapTrap.hpp FragTrap.hpp
OBJS = $(SRC:.cpp=.o)

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -O3
CC = c++
RM = rm -rf

all: $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(CXXFLAGS) -o $(@) -c $(<)

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(@) $(^)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re