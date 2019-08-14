#ifndef __GAME_H__
#define __GAME_H__
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��ʼ������
void InitBoard(char board[][3], int row, int col);
//��ӡ����
void  ShowBoard(char board[][3], int row, int col);
//����ƶ�
void PlayerMove(char board[][3], int row, int col);
//�Ƿ�Ӯ����ʤ��
char IsWin(char board[][3], int row, int col);
//�����ƶ�
void ComputerMove(char board[][3], int row, int col);

#endif //!__GAME_H__