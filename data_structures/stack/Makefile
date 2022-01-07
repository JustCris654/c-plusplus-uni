CXX = g++
CXXFLAGS = -std=c++17 -Wall

OBJECTS = main.o stack.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): stack.h
