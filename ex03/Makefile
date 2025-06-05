
#compiler 
CXX = g++

#compilerflags 
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

#executable name
NAME = megaphone

#source files
SRC = megaphone.cpp

#object files
OBJ = $(SRC:.cpp=.o)

#Default rule
all: $(NAME)

#How to build the executable
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

#clean object files
clean:
	rm -f $(OBJ)

#clean everything (object files plus executables)
fclean: clean
	rm -f $(NAME)

#rebuild all
re: fclean all

#Bonus: Mark 'clean' 'fclean' etc as phony targets (They are not files)
.PHONY: all clean fclean re 
