all: main

clean: main main.o swap.o
	rm main main.o swap.o

main: main.o swap.o
	gcc -o main main.o swap.o

main.o: main.c swap.h
	gcc -c -o main.o main.c

swap.o: swap.c swap.h
	gcc -c -o swap.o swap.c