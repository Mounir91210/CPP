SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
CC = c++ -Wall -Werror -Wextra -g3 -std=c++98
NAME = Brain
OBJS_DIR = .objets/
SRCS_DIR = srcs/
OBJS = $(SRCS:$(SRCS_DIR)%.cpp=$(OBJS_DIR)%.o)
DIR_DUP = mkdir -p $(@D)

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "Brain done !"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	@$(DIR_DUP)
	@$(CC) -c $< -o $@ 
	@echo "compiling: $<"

	# @make fclean -sC
clean :
	@rm -rf $(OBJS_DIR)
	@echo "refreeeesh baby"

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re-