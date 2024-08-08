#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                       打印100-200中所有素数
//int su(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)   //2µ½n-1
//	{
//		if (n % j == 0)
//
//			return 0;
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (su(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//
//	printf("count=%d", count);
//	return 0;
//}
//                                                                              闰年
//int run(int n)
//{
//	if(n % 4==0)
//	{
//		return 1;
//	}
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if(run(i)==1)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}
//                                                                               米奇妙妙屋
//int run(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//int main()
//{
//	int i = 0;
//
//		for (i = 1000; i <= 2000; i++)
//		{
//			if(run(i)==1)
//			{
//				printf("%d\n", i);
//			}
//		}
//
//
//	return 0;
//}
