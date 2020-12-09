#define  _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>
#include "Game.h"

void Initiliaze_arr(int* Iarr[Row][Col], int row, int col)
{
	int i, j;
	for ( i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			Iarr[i][j] =0;
		}
	}
}
void Print(char* Iarr[Row][Col], int row, int col)
{
	int i, j;
	for ( i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			printf(" %d ", Iarr[i][j]);
			if (j<row-1)
			{
				printf("%c", '|');
			}
		}
		printf("\n");
		for ( j = 0; j < row; j++)
		{
			if (i<col-1)
			{
				printf("%s", "___");
				if (j<row - 1)
				{
					printf("%c", '|');
				}
			}
		}
		printf("\n");
	}
}

void Game()
{
	int arr[Row][Col] = {0};
	Initiliaze_arr(arr, Row, Col);
	Print(arr, Row, Col);
}
void Test()
{
	int input;
	printf("*********************\n");
	printf("***Play 1***Exit 0***\n");
	printf("*********************\n");
	printf("请输入你的选择:>");
	scanf("%d", &input);
	do
	{
		switch (input)
		{
		case(1) :
			Game();
			input = 0;
			break; 
		case(0) :
			printf("退出游戏");
			break;
		default:
			printf("请重新输入");
			break;
		}

	} while (input);
}