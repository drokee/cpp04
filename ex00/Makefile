CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

# The name of the executable
LIBRARY = Animal

# Source files
SRCS = Cat.cpp Animal.cpp Dog.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

# Object files (automatically generated from source files)
OBJS = $(SRCS:.cpp=.o)

all: $(LIBRARY)

$(LIBRARY): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(LIBRARY) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIBRARY)

re: fclean all