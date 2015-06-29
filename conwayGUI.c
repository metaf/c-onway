#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "conway.h"
#include "gfx/gfx.h"

int main(int argc, char **argv){
    int width =500;
    int height = 350;
    int grid_size = 5;
    int c;


    /**
        Width and Height are in grid-cells.  grid_size is in pixels.
        Scale width or height by grid-size to get the pixel size.
    **/
    while (( c = getopt(argc, argv, "w:h:g:")) != -1){
        switch(c) {
            case 'w':; //semicolon for stupid C reasons.
                //Can't have a declaration as the first thing after a label.
                char *w_str = optarg;
                width = (int) strtol(w_str,NULL,10);
                break;
            case 'h':;//semicolon for stupid C reasons.
                char *h_str = optarg;
                height= (int) strtol(h_str,NULL,10);
                break;
            case 'g':;//semicolon for stupid C reasons.
                char *g_str = optarg;
                grid_size=(int)strtol(g_str,NULL,10);
                break;
            case '?':
                fprintf(stderr, "Something went wrong parsing opts");
                exit(1);
            default:
                exit(2);
        }
    }
    printf("width: %d height %d grid %d",width,height,grid_size);
    Board b = conway_get_board(width,height);

    int px_width = width * grid_size;
    int px_height = height * grid_size;

    gfx_open(px_width,px_height,"X C-onway");

    char event;
    while(1){
        //Handle events:
        event = gfx_wait();
        switch(event){
            case 'q':
                exit(0);
                break;
            case 's':
                //conway_step(b);
                break;
            case 1:
                printf("mouse button 1");
                fflush(stdout);
                break;
            case 2:
                printf("mouse button 2");
                fflush(stdout);
                break;
        }



        //if its' more than 1/60 later, draw board
    }
}
