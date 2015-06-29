CC=gcc
CFLAGS=-std=gnu99 -Wall -g

#$@ is the target
#$^ is all prerequisites

conwayGUI: conwayGUI.o gfx/gfx.o conway.o
	$(CC) $(CFLAGS) -o $@ $^  -lX11 -lm

conwayGUI.o: conwayGUI.c
	$(CC) $(CFLAGS) -o $@ -c $^

gfx/gfx.o: gfx/gfx.c
	$(CC) $(CFLAGS) -o $@ -c $^



gfx/gridtest: gfx/gridtest.o gfx/grid.o gfx/gfx.o
	$(CC) $(CFLAGS) -o gfx/gridtest gfx/grid.o gfx/gridtest.o gfx/gfx.o -lX11 -lm

gfx/grid.o: gfx/grid.c gfx/grid.h
	$(CC) $(CFLAGS) -c gfx/grid.c -o gfx/grid.o



gfx/gridtest.o: gfx/gridtest.c
	$(CC) $(CFLAGS) -c gfx/gridtest.c -o gfx/gridtest.o

clean:
	rm -rf conway *.o gfx/gridtest gfx/*.o
