CC = g++
FLAGS = -std=c++2a -Wall -g

all:hw09

hw09: hw09.cpp shapes.h
	$(CC) $(FLAGS) hw09.cpp $(OBJS) -o hw09
clean:
	rm *.o hw09
tar:
	tar cf hw09.tar hw09.scr Makefile hw09.cpp shapes.h