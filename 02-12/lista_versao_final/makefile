all: list.o main.o node.o
	gcc list.o main.o node.o -g -o minhalista

list.o: list.h list.c 
	gcc -g -c list.c

node.o: node.h node.c 
	gcc -g -c node.c

main.o:  main.c 
	gcc -g -c main.c

.PHONY: clean
clean:
	rm *.o minhalista *.err
