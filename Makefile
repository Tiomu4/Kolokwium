parent: parent.o
	ar rs parent.a parent.o

child: child.o
	ar rs child.a child.o

main: main.c
	gcc -o zaliczenie main.c parent.c child.c

all: parent child main
	rm -f part2 *.o *.a
	