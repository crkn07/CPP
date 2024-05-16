# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cristiantorres <cristiantorres@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/09 12:15:27 by crtorres          #+#    #+#              #
#    Updated: 2024/05/09 16:41:29 by cristiantor      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC_PATH = ./src

DOT_O = _objFiles

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = megaphone.cpp \

OBJS = $(addprefix $(DOT_O)/, $(SRC:%.cpp=%.o))

all: $(DOT_O) $(NAME)

$(DOT_O):
	@mkdir -p $(DOT_O)

$(DOT_O)/%.o: $(SRC_PATH)/%.cpp | $(DOT_O)
	$(PURPLE) COMPILING CPP... $(RESET)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CPPFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	@echo $(PURPLE)
	@echo "COMPILING CPP"
	@echo $(RESET)
	@clear
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@echo $(GREEN)
	@echo "--------------------------"
	@echo "|                        |"
	@echo "|    READY TO USE CPP    |"
	@echo "|                        |"
	@echo "--------------------------"
	@echo $(RESET)

clean:
	$(CYAN) "\n cleaning everything...\n" $(RESET)
	@rm -f $(OBJS)
	@rm -rf $(DOT_O)

fclean: clean
	@clear
	@rm -f $(NAME)
	@rm -rf $(DOT_O)

re: fclean all

re: fclean all

.PHONY: all clean fclean re

GREEN 	= @echo "\033[0;32m"
BLUE 	= @echo "\033[0;34m"
PURPLE 	= @echo "\033[0;35m"
CYAN 	= @echo "\033[0;36m"
YELLOW = \033[0;93m
RESET 	= "\033[1;0m"