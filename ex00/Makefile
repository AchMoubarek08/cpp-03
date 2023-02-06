CC = g++ -Wall -Wextra -Werror -std=c++98 -g -o Claptrap 

SRC =  ClapTrap.cpp main.cpp

NAME = Claptrap

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean	
	rm -f $(NAME) 

re : fclean all
		@rm -r *.dSYM