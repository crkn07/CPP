# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 14:53:02 by crtorres          #+#    #+#              #
#    Updated: 2024/05/16 19:49:21 by cristiantor      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombies

DOT_O = _objFiles


CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	Zombie.cpp\
	zombieHorde.cpp\

OBJ = $(addprefix $(DOT_O)/, $(SRC:%.cpp=%.o))

all: $(DOT_O) $(NAME)

$(DOT_O):
	@mkdir -p $(DOT_O)

$(DOT_O)/%.o: %.cpp | $(DOT_O)
	$(PURPLE) COMPILING CPP... $(RESET)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CPPFLAGS) -c $< -o $@
	
$(NAME): $(OBJ)
	@echo $(PURPLE)
	@echo "COMPILING CPP"
	@echo $(RESET)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)
	@echo "--------------------------"
	@echo "|                        |"
	@echo "|    READY TO USE CPP    |"
	@echo "|                        |"
	@echo "--------------------------"
	@echo $(RESET)

clean:
	$(CYAN) "\n cleaning everything...\n" $(RESET)
	@rm -f $(OBJ)

fclean:
	@clear
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

GREEN 	= @echo "\033[0;32m"
BLUE 	= @echo "\033[0;34m"
PURPLE 	= @echo "\033[0;35m"
CYAN 	= @echo "\033[0;36m"
YELLOW = \033[0;93m
RESET 	= "\033[1;0m"