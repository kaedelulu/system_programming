# Make file that builds executable file main.exe

CC= gcc
CFLAGS= -ansi -pedantic -Wall

main.exe: main.o arrlib.o functlib.o
	$(CC) $(CFLAGS) -o main.exe main.o arrlib.o functlib.o

main.o: main.c arrlib.h functlib.h
	$(CC) $(CFLAGS) -c main.c

arrlib.o: arrlib.c arrlib.h functlib.h
	$(CC) $(CFLAGS) -c arrlib.c

functlib.o: functlib.c  functlib.h
	$(CC) $(CFLAGS) -c functlib.c
clean:
	rm main.exe *.o
