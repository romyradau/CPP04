NAME = materia

CC = c++

FLAGS =  -std=c++98

FLAGS += -g

# SRC = main.cpp AMateria.cpp

SRC	=	$(shell find . -name "*.cpp" -execdir echo {} ";")


all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all