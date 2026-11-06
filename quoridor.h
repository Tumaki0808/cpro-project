#ifndef QUORIDOR_H
#define QUORIDOR_H

extern int wall[9][9];
extern int hwall[9][9];
extern int cross[9][9];
extern int px, py;
extern int ox, oy;

void print();
void waller();
void mover();

#endif