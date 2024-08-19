#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                       do while(至少执行一次）
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <=10);
//
//	return 0;
//}
//                                                                               阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	int b = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		a *= i;//从上一次开始*
//		b += a;
//	}
//
//	printf("%d", b);
//	return 0;
//}
//                                                                             阶乘和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	int b = 0;
//	
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)//每次都从1开始*
//		{
//			a *= i;
//		}
//		b += a;
//		a = 1;//关键
//	}
//	printf("%d", b);
//	return 0;
//}
//                                                                           二分查找法
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;

	while (left <= right)
	{
		if (arr[mid] < k)
		{
			left = mid ++;
		}
		else if(arr[mid] > k)
		{
			right = mid --;
		}
		else
		{
			printf("找到了：%d", arr[mid]);
			break;
		}
	}
	if(left>right)
	{
		printf("没找到");
	}
	return 0;
}