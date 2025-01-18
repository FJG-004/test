#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Sortarr(int arr[], int n,int find)
//{
//	int left = 0, right = n - 1,mid;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (find > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (find < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int Sortarr(int arr[], int left, int right, int find)
//{
//	int mid = (left + right) / 2;
//	if (left > right)
//	{
//		return -1;
//	}
//	if (find > arr[mid])
//	{
//		return Sortarr(arr, mid + 1, right, find);
//	}
//	else if (find < arr[mid])
//	{
//		return Sortarr(arr, left, mid - 1, find);
//	}
//	else
//	{
//		return mid;
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int find;
//	while (scanf("%d", &find) == 1)
//	{
//		int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
//		int num = Sortarr(arr, left, right, find);
//		if (num != -1)
//		{
//			printf("位于第%d项\n", num);
//		}
//		else
//		{
//			printf("Not find!\n");
//		}
//	}
//	return 0;
//}
//#define Cour 3
//#define Stu 40
//void Scanfscore(long long stu_num[], int score[][Cour], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld", &stu_num[i]);
//		for (int j = 0; j < Cour; j++)
//		{
//			scanf("%d", &score[i][j]);
//		}
//	}
//}
//void Sumforstu(int score[][Cour], int sum_S[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		sum_S[i] = 0;
//		for (int j = 0; j < Cour; j++)
//		{
//			sum_S[i] += score[i][j];
//		}
//	}
//}
//void Averforcour(int score[][Cour], float aver_cour[], int n)
//{
//	for (int j = 0; j < Cour; j++)
//	{
//		aver_cour[j] = 0;
//		for (int i = 0; i < n; i++)
//		{
//			aver_cour[j] += score[i][j];
//		}
//		aver_cour[j] /= n;
//	}
//	
//}
//void Printf(long long stu_num[], int score[][Cour], int sum_S[], float aver_cour[],int n)
//{
//	printf("studen's ID\t  MT\t  EN\t  PH\t Sum\n");
//	for (int i = 0; i < n; i++)
//	{
//		printf("%12lld\t", stu_num[i]);
//		for (int j = 0; j < Cour; j++)
//		{
//			printf("%4d\t", score[i][j]);
//		}
//		printf("%4d\n", sum_S[i]);
//	}
//	printf("Averforcourse:\t");
//	for (int j = 0; j < Cour; j++)
//	{
//		printf("%4.1f\t", aver_cour[j]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int score[Stu][Cour];
//	long long stu_num[Stu];
//	int sum_S[Stu];
//	float aver_cour[Cour];
//	int n = 0;
//	scanf("%d", &n);
//	Scanfscore(stu_num,score, n);
//	Sumforstu(score,sum_S,n);
//	Averforcour(score, aver_cour, n);
//	Printf(stu_num, score, sum_S, aver_cour,n);
//	return 0;
//}
//int main()
//{
//	char arr[] = "abc";
//	int n = sizeof(arr);
//	printf("%d", n);
//
//	return 0;
//}
//int plus(int , int )
//{
//	return a + b;
//}
//int main()
//{
//	int ret = plus(5, 3);
//	printf("%d", ret);
//
//	return 0;
//}
//int main()
//{
//	int n = printf("not find\n");
//	printf("%d", n);
//
//	return 0;
//}
//用递归法计算n的阶乘
//int Fac(int n)
//{
//	if (n >= 2)
//	{
//		return n * Fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	do
//	{
//		scanf("%d", &n);
//	} while (n < 0);
//	int result = Fac(n);
//	printf("%d\n", result);
//
//	return 0;
//}`	