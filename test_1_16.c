#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 12
//int main()
//{
//	char name[N];
//	fgets(name, sizeof(name), stdin);
//	printf("%s", name);
//
//	return 0;
//}
//void Mystrcpy(char a[], char b[])
//{
//	int i = 0;
//	while (a[i] != '\0')
//	{
//		b[i] = a[i];
//		i++;
//	}
//	b[i] = '\0';
//}
//void Mystrcpy(char* a, char* b)
//{
//	while (*a != '\0')
//	{
//		*b = *a;
//		a++;
//		b++;
//	}
//	*b = '\0';
//}
//int main()
//{
//	char a[N], b[N];
//	fgets(a, sizeof(a), stdin);
//	Mystrcpy(a, b);
//	printf("%s", b);
//	return 0;
//}
//int Mystrlen(char arr[])
//{
//	int len = 0;
//	for (len = 0; arr[len] != '\0'; len++);
//	return len - 1;
//}
//#include <string.h>
//int Mystrlen(const char* arr)
//{
//	int len = 0;
//	while (*arr++ != '\0')
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[N];
//	fgets(arr, sizeof(arr), stdin);
//	arr[strcspn(arr, "\n")] = '\0';
//	int len = Mystrlen(arr);
//	printf("%d", len);
//
//	return 0;
//}