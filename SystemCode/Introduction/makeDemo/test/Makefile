# Make file that builds executable file main.exe

CC= gcc
CFLAGS= -ansi -pedantic -Wall

all: result
result: HelloWorld.o
	$(CC) $(CFLAGS) -o result HelloWorld.o

clean:
	rm main.exe *.o
