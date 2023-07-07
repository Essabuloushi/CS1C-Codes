CC = g++
FLAGS = -std=c++2a -Wall -g
# OBJS = pointing.o

all:hw08

hw08: hw08.cpp pointing.h
	$(CC) $(FLAGS) hw08.cpp $(OBJS) -o hw08
clean:
	rm *.o hw08
tar:
	tar cf hw08.tar hw08.scr Makefile hw08.cpp pointing.h