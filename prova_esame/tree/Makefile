CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

OBJECTS = main.o tree.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): tree.h
