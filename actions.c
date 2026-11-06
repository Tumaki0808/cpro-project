#include<stdio.h>
#include "quoridor.h"

void waller(){
    char d;
    int x1, y1;
    scanf(" %c %d %d", &d, &x1, &y1);

    if (x1 > 9 || x1 < 1 || y1 > 9 || y1 < 0 || d > 119 || d < 103){
        printf("invalid input\n");
    }
    else if (d == 'v'){
        if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8){
            printf("wrong move\n");
        } else if (wall[x1-1][y1-1] == 1 || wall[x1][y1-1] == 1 || cross[x1-1][y1-1] == 1){
            printf("wrong move\n");
        } else {
            wall[x1-1][y1-1] = 1;
            wall[x1][y1-1] = 1;
            cross[x1-1][y1-1] = 1;
            print();
        }
    }
    else if (d == 'h'){
        if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8){
            printf("wrong move\n");
        } else if (hwall[x1-1][y1-1] == 1 || hwall[x1-1][y1] == 1 || cross[x1-1][y1-1] == 1){
            printf("wrong move\n");
        } else {
            hwall[x1-1][y1-1] = 1;
            hwall[x1-1][y1] = 1;
            cross[x1-1][y1-1] = 1;
            print();
        }
    }
    else {
        printf("invalid input\n");
    }
}

void mover(){
    char d;
    if (scanf(" %c", &d) != 1){
        printf("invalid input\n");
    }
    else if (d == 'l'){
        if (py == 0){
            printf("wrong move\n");
        } else if (wall[px][py-1] == 1){
            printf("wrong move\n");
        } else if (px == ox && py - 1 == oy){
            printf("wrong move\n");
        } else {
            py = py - 1;
            print();
        }
    }
    else if (d == 'r'){
        if (py == 8){
            printf("wrong move\n");
        } else if (wall[px][py] == 1){
            printf("wrong move\n");
        } else if (px == ox && py + 1 == oy){
            printf("wrong move\n");
        } else {
            py = py + 1;
            print();
        }
    }
    else if (d == 'u'){
        if (px == 0){
            printf("wrong move\n");
        } else if (hwall[px-1][py] == 1){
            printf("wrong move\n");
        } else if (px - 1 == ox && py == oy){
            printf("wrong move\n");
        } else {
            px = px - 1;
            print();
        }
    }
    else if (d == 'd'){
        if (px == 8){
            printf("wrong move\n");
        } else if (hwall[px][py] == 1){
            printf("wrong move\n");
        } else if (px + 1 == ox && py == oy){
            printf("wrong move\n");
        } else {
            px = px + 1;
            print();
        }
    }
    else {
        printf("invalid input\n");
    }
}