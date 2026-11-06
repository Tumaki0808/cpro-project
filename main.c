#include<stdio.h>
#include "quoridor.h"

int main(){

    printf("Welcome to quoriddor game\n\n");
    printf("To move left enter m l, To move right enter m r, to move up enter m u, to move down enter m d\n");
    printf("To place a vertical wall, for example at (1, 2), enter w v 1 2\n");
    printf("To place a horizontal wall, for example at (1, 2), enter w h 1 2\n");
    printf("Upon entering an invalid move, it will show invalid input\n");
    printf("Each player has limit of 10 walls");
    printf("Enjoy!\n\n");


    print();

    int i;
    for(i=0; i<100; i++){
        char c;
        if (scanf(" %c", &c) != 1){
            break;
        }

        if (c == 'w'){
            waller();
        }
        else if (c == 'm'){
            mover();
        }
        else {
            printf("invalid input\n");
        }

    }

    return 0;
}