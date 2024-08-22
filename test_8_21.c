#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//srand
#include <time.h>//time
//                                                                         猜数字游戏
//void menu()
//{
//	printf("************************\n");
//	printf("*********1.play*********\n");
//	printf("*********2.exit*********\n");
//	printf("************************\n");
//
//}
//void game()
//{
//	//设置1到100的随机数
//	//srand(100);
//	int ret = rand() % 100 + 1;//这样就有1到100的效果了，举例：123465 % 100 == 65，因为100的话会进1只能0到99
//	                           //因为100的话会进1只能0到99，故+1
//	//猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请输入数字\n");
//		scanf("%d", &guess);
//		if (ret < guess)
//		{
//			printf("猜大了\n");
//		}
//		else if(ret>guess)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳（用现在时间换算过来的一个数）,用在主函数中就不用多次设置起点，
//	                                //故不用于game()中
//	do
//	{
//		menu();
//		printf("请选择:>(1/0)");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("开始游戏\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}