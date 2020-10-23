all: main.o
	gcc -o main main.o

run: main
	./main
