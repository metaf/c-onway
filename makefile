CC=gcc
CFLAGS=-std=gnu99 -Wall -g

conwayGUI: conwayGUI.o
	$(CC) $(CFLAGS) -o conwayGUI conwayGUI.o

conway: conway.o gfx/grid.o gfx/gfx.o
	$(CC) $(CFLAGS) -o conway conway.o gfx/gfx.o gfx/grid.o -lX11 -lm

conwayGUI.o:
	$(CC) $(CFLAGS) -c conwayGUI.c -o conwayGUI.o

gfx/gridtest: gfx/gridtest.o gfx/grid.o gfx/gfx.o
	$(CC) $(CFLAGS) -o gfx/gridtest gfx/grid.o gfx/gridtest.o gfx/gfx.o -lX11 -lm

gfx/grid.o: gfx/grid.c gfx/grid.h
	$(CC) $(CFLAGS) -c gfx/grid.c -o gfx/grid.o

gfx/gfx.o: gfx/gfx.c
	$(CC) $(CFLAGS) -c gfx/gfx.c -o gfx/gfx.o

gfx/gridtest.o: gfx/gridtest.c
	$(CC) $(CFLAGS) -c gfx/gridtest.c -o gfx/gridtest.o

clean:
	rm -rf conway *.o gfx/gridtest gfx/*.o
