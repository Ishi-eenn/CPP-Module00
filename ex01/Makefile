NAME	=	phonebook
CXX		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC		=	main.cpp Phonebook.cpp Contact.cpp
OBJ		=	$(SRC:.cpp=.o)
RM		=	rm -rf

YELLOW	=	\033[1;33m
GREEN	=	\033[1;32m
RESET	=	\033[0m

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
		$(CXX) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY : all test clean fclean re
