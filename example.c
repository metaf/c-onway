/*
A simple example of using the gfx library.
CSE 20211
9/7/2011
by Prof. Thain
*/

#include <stdio.h>
#include "gfx/gfx.h"
#include <time.h>
#include <stdlib.h>
#define XSIZE 300
#define YSIZE 300
#define CSIZE 10
#define ALIVE 1
#define DEAD 0

char *boardPtr;

void setup_gfx();
void setCellAt(char *cell, char v);
char *getCell(int x, int y);
void drawBoard();

int main()
{


	int boardW = XSIZE/CSIZE;
	int boardH = YSIZE/CSIZE;
	boardPtr = calloc(1,sizeof(char)*boardW*boardH);


	setup_gfx();
	char c;
	while(1){
		c = gfx_wait(); //Also flushes output

		switch(c) {
			case 1:
				//Left Mouse Button
				setCellAt(getCell(gfx_xpos(),gfx_ypos()),ALIVE);
				break;
			case 2:
				//Right Mouse Button

				break;

			case 3:
				//Center Mouse Button

				break;
			default:
				//handle any keypress
				return 0;
		}
		drawBoard();
		nanosleep((struct timespec[]){{0, 50000000}}, NULL);
	}
	
}

void setup_gfx(){
	// Open a new window for drawing.
	gfx_open(XSIZE,YSIZE,"Conway's Game Of Life");

	// Set the current drawing color to green.
	gfx_color(0,0,0);

	// Set BG White
	gfx_clear_color(255,255,255);
	gfx_clear();

}

char *getCell(int x, int y){

	
}

void drawBoard(){

}

void setCellAt(char *cell, char v){

}
