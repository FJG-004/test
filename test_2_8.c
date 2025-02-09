#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 10
#include <stdlib.h>
//int compare(const void* a, const void* b);
//int main()
//{
//	int* arr=NULL;
//	arr = (int*)malloc(N * sizeof(int));
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	/*for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//        }
//	}*/
//	/*for (int i = 0; i < N; i++)
//	{
//		int k = i;
//		for (int j = i + 1; j < N; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				k = j;
//			}
//		}
//		if (k != i)
//		{
//			int temp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = temp;
//		}
//	}*/
//	qsort(arr, N, sizeof(int), compare);
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	free(arr);
//	return 0;
//}
//int compare(const void* a, const void* b)
//{
//	const int* num1 = (const int*)a;
//	const int* num2 = (const int*)b;
//	
//	return *num1 - *num2;
//}
//int main()
//{
//	float a = 5.5;
//	//101.1
//	//S=0  M=1.011  E=2+127
//	//0(符号位) 10000001(指数位) 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40 b0 00 00
//
//	return 0;
//}
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001
//	float* a = (float *) & n;
//	printf("n = %d\n", n);
//	printf("a = %f\n", *a);
//	//以浮点数的角度看:
//	//0 00000000 00000000000000000001001是一个极小的数
//
//	*a = 9.0;
//	//(-1)*0 * 1.001 * 2^3
//	//S=0  E=130  M=1.001
//	//0 10000010 00100000000000000000000
//	//以整形角度看就是1091567616
//	printf("n = %d\n", n);
//	printf("a = %f\n", *a);
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,56,7,9 };
//	int* test = arr;
//	
//
//	return 0;
//}
//#define N 10
//void My_strcpy(char arr[], const char brr[]);
//int main()
//{
//	char arr[N] = "abc";
//	char brr[N] = "abcdef";
//	My_strcpy(arr, brr);
//	printf("%s", arr);
//
//	return 0;
//}
////字符串复制
//void My_strcpy(char arr[], const char brr[])
//{
//	while (*(arr++) = (*brr++));
//
//	*arr = '\0';
//}

//int main()
//{
//	int arr[N] = { 1,2,3,4,5,6,7,8,9,10 };
//	int s = 0;
//	int d = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] % 2 == 0)
//			d++;
//		else
//			s++;
//	}
//	int* Simple = NULL;
//	int* Double = NULL;
//	Simple = (int*)malloc(s * sizeof(int));
//	Double = (int*)malloc(d * sizeof(int));
//	for (int i = 0,d = 0,s = 0; i < N; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			Double[d] = arr[i];
//			d++;
//		}
//		else
//		{
//			Simple[s] = arr[i];
//			s++;
//		}
//	}
//	
//	return 0;
//}