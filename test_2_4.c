#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define N 4
//void ADD(int *arr);
//int main()
//{
//	int arr[][N] = { {1,2,5},{5,6,7},{7,8,5} };
//	ADD(arr[0]);
//
//	return 0;
//}
//void ADD(int *arr)
//{
//	printf("%d", arr[1*N+1]);
//}
//#define M 3
//#define N 10
//#include <string.h>
//void INPUT(char* arr[]);
//void PRINTF(char* arr[]);
//int main()
//{
//	char arr[M][N];
//	char* ptr[M];
//	for (int i = 0; i < M; i++)
//	{
//		ptr[i] = arr[i];
//	}
//	//ÊäÈëÊä³ö
//	INPUT(ptr);
//	PRINTF(ptr);
//
//	return 0;
//}
////ÊäÈë
//void INPUT(char* arr[])
//{
//		for (int j = 0; j < M; j++)
//		{
//			fgets(arr[j], N, stdin);
//			arr[j][strcspn(arr[j], "\n")] = '\0';
//		}
//
//}
////Êä³ö
//void PRINTF(char* arr[])
//{
//	for (int i = 0; i < M; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//}
//int main()
//{
//	int a;
//	scanf("%*d%d",&a);
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//    int a, b;
//    char ch;
//    scanf("%d", &a);
//    while ((ch = getchar()) == ' ');
//    scanf("%d", &b);
//
//    printf("%d%c%d = %d", a, ch, b, a + b);
//
//    return 0;
//}
//Ã°ÅÝÅÅÐò
//#define N 10
//void SORT(int arr[]);
//int main()
//{
//	int arr[N];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	SORT(arr);
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
////ÅÅÐò
//void SORT(int arr[])
//{
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
////Ñ¡ÔñÅÅÐò
//#define N 10
//void SORT(int arr[]);
//int main()
//{
//	int arr[N];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	SORT(arr);
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
////ÅÅÐò
//void SORT(int arr[])
//{
//	for (int i = 0; i < N; i++)
//	{
//		int k = i;
//		for (int j = i + 1; j < N; j++)
//		{
//			if (arr[k] < arr[j])
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
//	}
//}
//¿ìËÙÅÅÐò
//#define N 10
//#include <stdlib.h>
//int compare(const void* a, const void* b)
//{
//	const int* num1 = (const int*)a;
//	const int* num2 = (const int*)b;
//
//	return *num1 - *num2;
//}
//int main()
//{
//	int arr[N] = { 12,45,78,98,65,49,21,35,598,457 };
//	qsort(arr, N, sizeof(arr[0]), compare);
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}