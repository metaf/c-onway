#include "conway.h"
#include <stdlib.h>

Board conway_get_board(int width, int height) {
    char** cells = calloc(height, sizeof(char*));
	for(int i = 0; i<height; i++){
		cells[i]=calloc(width,sizeof(char));
	}
    Board b = {width,height,cells};
    return b;
}

void conway_step(Board b){
    //dummy implementation
    for (int i = 0; i<b.height; i++){
        for (int j = 0; j<b.width; j++){
            if (b.cells[i][j] == 1){
                b.cells[i][j] = 0;
            }
            else{
                b.cells[i][j] = 1;
            }
        }
    }
}

void conway_destroy_board(Board b){
    for(int i = 0; i< b.height; i++){
        free((void*)b.cells[i]);
    }
    free(b.cells);
}
