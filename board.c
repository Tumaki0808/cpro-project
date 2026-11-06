#include<stdio.h>
#include "quoridor.h"

int wall[9][9] = {0};
int hwall[9][9] = {0};
int cross[9][9] = {0};
int px = 8, py = 4;
int ox = 0, oy = 4;

void print(){

    printf("   1   2   3   4   5   6   7   8   9\n");
    printf("  -----------------------------------\n");

    int i, j;

    for(i=0; i<9; i++){
        printf("%d|", i+1);
        for(j=0; j<8; j++){
            if (i == px && j == py){
                printf("[.]");
            } else if (i == ox && j == oy){
                printf("[*]");
            } else {
                printf("[ ]");
            }

            if (wall[i][j] == 1){
                printf("|");
            } else {
                printf(" ");
            }
        }

        if (i == px && py == 8){
            printf("[.]|\n");
        } else if (i == ox && oy == 8){
            printf("[*]|\n");
        } else {
            printf("[ ]|\n");
        }

        if (i < 8) {
            printf("  ");
            for(j=0; j<9; j++){
                if (hwall[i][j] == 1){
                    printf("---");
                } else {
                    printf("   ");
                }
                
                if (j < 8) {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    printf("  -----------------------------------\n");

}