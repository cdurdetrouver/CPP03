NAME = DiamondTrap
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 -I$(INCLUDE)
INCLUDE = includes
SRC_DIR = src
SRC = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp src/FragTrap.cpp src/DiamondTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
