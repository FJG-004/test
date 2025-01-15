#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int compare(const void* a, const void* b)
//{
//	int* sa = (int*)a;
//	int* sb = (int*)b;
//	return *sb - *sa;
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, 10, sizeof(int), compare);
//	for (int i = 0; i < 10; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	FILE* fp;
//	fp = fopen("test.txt", "w");
//	if (fp == NULL)
//	{
//		exit(0);//assert?    errno
//	}
//	char ch = getchar();
//	fputc(ch, fp);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}