#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv){
    int width =500;
    int height = 350;
    int gridSize = 5;
    int c;
    int index;

    while (( c = getopt(argc, argv, "w:h:g:")) != -1)
        switch(c) {
            case 'w': ;
                char *w_str = optarg;
                width = (int) strtol(w_str,NULL,10);
                break;
            case 'h': ;
                char *h_str = optarg;
                height= (int) strtol(h_str,NULL,10);
                break;
            case 'g': ;
                char *g_str = optarg;
                gridSize=(int)strtol(g_str,NULL,10);
                break;
            case '?':
                fprintf(stderr, "Something went wrong parsing opts");
                exit(1);
            default:
                exit(2);
        }

    printf("width: %d height %d grid %d",width,height,gridSize);
}
