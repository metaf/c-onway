CC=gcc
CFLAGS=-std=gnu99 -Wall -g
conway: conway.c gfx/gfx.c gfx/gfx.h
	$(CC) $(CFLAGS) -o conway conway.c gfx/gfx.c -lX11 -lm

clean:
	rm -rf conway
