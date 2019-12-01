all:maman11q1

reverse:maman11q1.c
	gcc maman11q1.c -Wall -ansi -pedantic -o maman11q1
	
clean:
	rm -f *.o maman11q1
