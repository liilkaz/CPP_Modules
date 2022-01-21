NAME 			= bureaucrat

COMP 			= clang++

FLAGS 			= -Wall -Wextra -Werror -std=c++98

SRC 			= Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp main.cpp 

HPP				= Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp

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