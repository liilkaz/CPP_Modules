NAME 			= animals

COMP 			= clang++

FLAGS 			=  -Wall -Wextra -Werror -std=c++98

NEW_FLAGS		= -Wshadow -Wno-shadow

SRC 			= main.cpp Animal.cpp WrongAnimal.cpp Cat.cpp Dog.cpp WrongCat.cpp

HPP				= Animal.hpp WrongAnimal.hpp Cat.hpp Dog.hpp WrongCat.hpp

RM				=	rm -f

OFF_COLOR		=	\033[0m
RED				=	\033[0;31m
GREEN			=	\033[0;32m

.PHONY	:	all clean fclean re

all: $(NAME)

$(NAME) : $(SRC) $(HPP)
	@$(COMP) $(FLAGS) $(NEW_FLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)Done!$(OFF_COLOR)"

clean:
	@echo "$(RED)🤷 Object files are absent! 🤷$(OFF_COLOR)"

fclean:	clean
	@$(RM) $(NAME) $(BONUS_NAME)
	@echo "${RED}🗑 Deleted!${OFF_COLOR}"

re:		fclean all