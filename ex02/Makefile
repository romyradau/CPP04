NAME = abstractAnimals

CC = c++

FLAGS =  -std=c++98

FLAGS += -g

SRC = main.cpp AbstractAnimal.cpp Cat.cpp Dog.cpp Brain.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all