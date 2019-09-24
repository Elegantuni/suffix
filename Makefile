test1: suffix.o
	gcc -o test1 main.c suffix.o

suffix.o:
	gcc -c suffix.c -o suffix.o

clean:
	rm -f test1 suffix.o

