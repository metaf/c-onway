CC=gcc
CFLAGS=-std=gnu99 -Wall -g
conway: conway.o grid.o
	$(CC) $(CFLAGS) -o conway conway.o gfx.o -lX11 -lm

gridtest: gridtest.o grid.o
	$(CC) $(CFLAGS) -o gridtest grid.o gridtest.o

grid.o: gfx/grid.c gfx/grid.h
	$(CC) $(CFLAGS) -c gfx/grid.c

gridtest.o: gfx/gridtest.c
	$(CC) $(CFLAGS) -c gfx/gridtest.c

clean:
	rm -rf conway *.o
