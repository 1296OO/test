#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	char  ret = 0;
	char board[ROW][COL] = { 0 };
	InitBorad(board,ROW,COL);
	Display(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Display(board, ROW, COL);
		ComputeMove(board, ROW, COL);
		Display(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else 
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("************************\n");
	printf("**  1.play   0.exit  ***\n");
    printf("************************\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}
//void bubble_sort(int arr[], int sz)
//{
//	int x = 0;
//	
//	for (x = 0; x < sz - 1; x++)
//	{
//		int y = 0;
//		for (y = 0; y < sz - x-1; y++)
//		{
//			if (arr[y] > arr[y + 1])
//			{
//				int tem = arr[y];
//				arr[y] = arr[y + 1];
//				arr[y + 1] = tem;
//			}
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	scanf("%d", &i);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	printf("hehe");
//	return 0;
//}