output: main.o add.o
	g++ main.o add.o -o output

main.o: main.c
	g++ -c main.c

add.o: add.c add.h
	g++ -c add.c

clean:
	rm *.o output
