CC = g++
FLAGS = -std=c++2a -Wall -g
OBJS = iterative.o recursive.o

all:hw06

hw06: hw06.cpp iterative.cpp recursive.cpp iterative.o recursive.o
	$(CC) $(FLAGS) hw06.cpp $(OBJS) -o hw06 
iterative.o: iterative.cpp iterative.h
	$(CC) $(FLAGS) -c iterative.cpp -o iterative.o
recursive.o: recursive.cpp recursive.h
	$(CC) $(FLAGS) -c recursive.cpp -o recursive.o
clean:
	rm *.o hw06
tar:
	tar cf hw06.tar hw06.scr Makefile hw06.cpp iterative.cpp recursive.cpp iterative.h recursive.h