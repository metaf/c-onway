#ifndef CONWAY_H
#define CONWAY_H

typedef struct board {
	int boardWidth;
	int boardHeight;
	char **cells;
} Board;

Board conway_get_board(int width, int height);

#endif
