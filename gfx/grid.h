/* This file was automatically generated.  Do not edit! */
#ifndef GRID_H
#define GRID_H

typedef struct board {
	int boardWidth;
	int boardHeight;
	char **cells;
} Board;


void xg_destroy();
void xg_draw_board();
Board xg_init(int gridSizePx,int widthPx,int heightPx,char *title);


#endif
