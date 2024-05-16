CC = g++
CFLAGS = -Wall -g

myprogram: megaphone.o
	$(CC) $(CFLAGS) -o myprogram megaphone.o
main.o: megaphone.cpp
	$(CC) $(CFLAGS) -c megaphone.cpp
clean:
	rm f * o myprogram