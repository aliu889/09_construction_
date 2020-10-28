all: books.o main.o
	gcc -o books books.o main.o
books.o: books.c books.h
	gcc -c books.c
main.o: main.c books.h
	gcc -c main.c
run: 
	./main
clean:
	-rm *.o