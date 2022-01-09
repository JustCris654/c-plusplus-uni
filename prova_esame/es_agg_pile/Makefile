CXX = c++
CXXFLAGS = -std=c++11 -Wall -Wextra
OBJECTS = main.o stack.o

main: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): stack.h
