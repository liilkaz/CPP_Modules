NAME 			= materia

COMP 			= clang++

FLAGS 			=  -Wall -Wextra -Werror -std=c++98

SRC 			= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

HPP				= AMateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp

RM				=	rm -f

OFF_COLOR		=	\033[0m
RED				=	\033[0;31m
GREEN			=	\033[0;32m

.PHONY	:	all clean fclean re

all: $(NAME)

$(NAME) : $(SRC) $(HPP)
	@$(COMP) $(FLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)Done!$(OFF_COLOR)"

clean:
	@echo "$(RED)🤷 Object files are absent! 🤷$(OFF_COLOR)"

fclean:	clean
	@$(RM) $(NAME) $(BONUS_NAME)
	@echo "${RED}🗑 Deleted!${OFF_COLOR}"

re:		fclean all