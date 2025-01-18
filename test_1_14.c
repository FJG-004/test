#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define N 3
//void Scanfarr(int arr[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void Sortarr(int arr[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - 1 - i; j++)
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
//int main()
//{
//	int arr[N];
//	Scanfarr(arr, N);
//	Sortarr(arr, N);
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int Binsearch(int arr[], int k, int left, int right)
//{
//    int mid = (left + right) / 2;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (k > arr[mid])
//        {
//            left = mid + 1;
//        }
//        else if (k < arr[mid])
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int Binsearch(int arr[], int k, int left, int right)
//{
//    int mid = (left + right) / 2;
//    if (left > right)
//    {
//        return -1;
//    }
//    if (k > arr[mid])
//    {
//        return Binsearch(arr, k, mid + 1, right);
//    }
//    else if (k < arr[mid])
//    {
//        return Binsearch(arr, k, left, mid-1);
//    }
//    else
//    {
//        return mid;
//    }
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
//    int k = 0;
//    scanf("%d", &k);
//    int n = Binsearch(arr, k, left, right);
//    if (n != -1)
//    {
//        printf("%d", n);
//    }
//    else
//    {
//        printf("Not Find!");
//    }
//	return 0;
//}