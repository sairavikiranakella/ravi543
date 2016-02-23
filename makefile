all:ravi

ravi: sortb.o swap.o
	gcc sortb.o swap.o -o ravi.o

sortb.o: sortb.c
	gcc -c sortb.c

swap.o: swap.c
	gcc -c swap.o
