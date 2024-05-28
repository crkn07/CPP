NAME = zombies

DOT_O = _objFiles

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp\
	Zombie.cpp\
	newZombie.cpp\
	randomChump.cpp\

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
	@rm -f $(OBJS)
	@rm -rf $(DOT_O)

fclean: clean
	@clear
	@rm -f $(NAME)
	@rm -rf $(DOT_O)

re: fclean all

.PHONY: all clean fclean re

GREEN 	= @echo "\033[0;32m"
BLUE 	= @echo "\033[0;34m"
PURPLE 	= @echo "\033[0;35m"
CYAN 	= @echo "\033[0;36m"
YELLOW = \033[0;93m
RESET 	= "\033[1;0m"