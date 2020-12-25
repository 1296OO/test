#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void InitBorad(char borad[ROW][COL], int row, int col);
void Display(char borad[ROW][COL], int row, int col);
void PlayerMove(char borad[ROW][COL], int row, int col);
void ComputeMove(char borad[ROW][COL], int row, int col);
char IsWin(char borad[ROW][COL], int row, int col);