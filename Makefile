CXX = g++

CXXFLAGS := -std=c++14 -Wall -Werror

all : main test

main : 
	$(CXX) $(CFLAGS) $(CXXFLAGS) main.cpp -o main

test :
	$(CXX) $(CFLAGS) $(CXXFLAGS) test.cpp -o test

.PHONY: clean
clean :
	rm -f main
	rm -f test