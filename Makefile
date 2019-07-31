# this target will compile all the files
CFLAGS = -c -Wall
CC = g++

TARGET: clean main.o 
	$(CC) main.o -o main -lsfml-graphics -lsfml-window -lsfml-system

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -f *.o main
