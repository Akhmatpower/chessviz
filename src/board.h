#ifndef BOARD_H
#define BOARD_H

void scanan();
int chartoint(char input[6]);
int white();
int black();
void move();
int checkWIn(int status);
int checkY();
int checkX();
int checkD();
void transformPawn();

#endif
