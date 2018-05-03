# John Harvey


#macros
CC = gcc
CFLAGS = -Wall -std=c99 -pedantic -lm -g
RUN = ./sim

simscheduler: simscheduler.o
	$(CC) $(CFLAGS) -o sim simscheduler.o

simscheduler.o: simscheduler.c headers.h
	$(CC) $(CFLAGS) -c simscheduler.c

run:
	$(RUN)

clean:
	rm -f *.o *.out sim
