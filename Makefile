CXX = g++

CXXFLAGS := -Wall -Werror

OBJS := main.o

all : main test

main : 
	$(CXX) $(CFLAGS) $(CXXFLAGS) main.cpp -o main

.PHONY: clean
clean :
	rm -f main