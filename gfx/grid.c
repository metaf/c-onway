/*
Use the simple gfx library to implement a grid based graphics thing.
*/

#include <stdio.h>
#include <stdlib.h>
#include "gfx.h"
static int gridSize;
static int width;
static int height;
static int numCellsX;
static int numCellsY;

typedef struct board {
	int boardWidth;
	int boardHeight;
	char **cells;
} Board;
static Board b;


static void xg_free_board(){
	for(int i = 0; i< b.boardHeight; i++){
		free((void*)b.cells[i]);
	}
}

static char **xg_alloc_board(){
	char** board = calloc(numCellsY, sizeof(char*));
	for(int i = 0; i<numCellsY; i++){
		board[i]=calloc(numCellsX,sizeof(char));
	}
	return board;
}

Board xg_init(int gridSizePx, int widthPx, int heightPx, char* title){
	gfx_open(widthPx,heightPx,title);
	gridSize=gridSizePx;
	height=heightPx;
	width=widthPx;
	numCellsY = heightPx/gridSizePx;
	numCellsX = widthPx/gridSizePx;

	b = (Board) {numCellsX, numCellsY, xg_alloc_board()};
	return b;
}

void xg_draw_board(){

};

void xg_destroy(){
	xg_free_board();
}

