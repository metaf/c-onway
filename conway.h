#ifndef CONWAY_H
#define CONWAY_H

typedef struct board {
	int width;
	int height;
	char **cells;
} Board;

Board conway_get_board(int width, int height);
void conway_step(Board b);
void conway_randomize(Board b);
void conway_destroy_board(Board b);



#endif
