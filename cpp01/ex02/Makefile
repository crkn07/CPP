# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crtorres <crtorres@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/22 18:34:44 by crtorres          #+#    #+#              #
#    Updated: 2024/02/22 18:35:38 by crtorres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

name = string_manipulation

DOT_O = _objFiles

SRC = main.cpp\

OBJ = $(addprefix $(DOT_O) $(SCR:.cpp=.o))

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(DOT_O) $(NAME)

$(DOT_O)/%.o: $(SRC)/%.c | $(DOT_O)
	$(PURPLE) COMPILING MINISHELL... $(RESET)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CPPFLAGS) -c $< -o $@
	
$(NAME) : $(OBJ)
	@echo $(PURPLE)
	@echo "COMPILING CPP"
	@echo $(RESET)
	@clear
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
	@echo $(GREEN)
	@echo "--------------------------"
	@echo "|                        |"
	@echo "|   READY TO USE CPP 	 |"
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