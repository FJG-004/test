#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//选择排序
//int main()
//{
//	int arr[] = { 199,23,38,45,15,54,67,879 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n; i++)
//	{
//		int k = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				k = j;
//			}
//		}
//		if (k != i)
//		{
//			int t = arr[i];
//			arr[i] = arr[k];
//			arr[k] = t;
//		}
//	}
//	for (int i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//#include <string.h>
//#include <errno.h>
//struct S
//{
//	char name[20];
//	int age;
//	char sore;
//
//};
//int main()
//{
//	FILE* fp;
//	fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	struct S s = { 0 };
//
//	fread(&s, sizeof(struct S), 1, fp);
//	printf("%s %d %c", s.name, s.age, s.sore);
//
//	fclose(fp);
//	fp = NULL;//相当于清空文件的内容吧
//
//	return 0;
//}
// sscanf和sprintf
//struct S
//{
//	char name[20];
//	int age;
//	char sore;
//};
//int main()
//{
//	struct S s = { "zhangsan",18,'F' };
//	struct S temp = { 0 };
//	char arr[100];
//	sprintf(arr, "%s %d %c", s.name, s.age, s.sore);
//	printf("数组：%s\n", arr);
//	sscanf(arr, "%s %d %c", temp.name, &temp.age, &temp.sore);
//	printf("格式化：%s %d %c\n", temp.name, temp.age, temp.sore);
//
//	return 0;
//}