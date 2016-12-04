collatz: collatz.o
	gcc -Wall collatz.o -o collatz
collatz.o: collatz.c
	gcc -Wall -g -c collatz.c
clean:
	rm collatz.o
	rm collatz
	rm *.~
