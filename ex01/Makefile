CC = g++ -Wall -Wextra -Werror -std=c++98 -g -o Scavtrap 

SRC =  ClapTrap.cpp ScavTrap.cpp main.cpp

NAME = Scavtrap

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean	
	rm -f $(NAME) 

re : fclean all
		@rm -r *.dSYM