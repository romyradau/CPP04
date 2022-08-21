NAME = animals

CC = c++

FLAGS =  -std=c++98

FLAGS += -g

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all