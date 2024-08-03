#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                 阶乘
//                                                                                 for
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}
//                                                                               while
//int main()
//{
//	int i = 2;
//	int n = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	while (i <= n)
//	{
//	sum = sum * i;
//
//	i++;
//	
//	}
//	
//	printf("%d", sum);
//	return 0;
//}
//                                                                             1!+2!+3!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1,ret=1; i <= n; i++)
//		{
//			ret *= i;//ret要在下一次初始化为1
//
//		}
//		sum += ret;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}                           
//                                                                          1!+2!+3!简化
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}
