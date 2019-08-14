#ifndef __GAME_H__
#define __GAME_H__
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//初始化棋盘
void InitBoard(char board[][3], int row, int col);
//打印棋盘
void  ShowBoard(char board[][3], int row, int col);
//玩家移动
void PlayerMove(char board[][3], int row, int col);
//是否赢得了胜利
char IsWin(char board[][3], int row, int col);
//电脑移动
void ComputerMove(char board[][3], int row, int col);

#endif //!__GAME_H__