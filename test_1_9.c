#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char a = -1;
//	unsigned char b = -1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//    //前面部分是一样的，最后b中储存的是11111111
//	//在打印的过程中，整型提升中b的类型为unsigned char，则前面补0
//	//要打印的就是00000000000000000000000011111111
//	//答案为255
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//a中存储的是10000000
//	printf("%u", a);
//	//a整型提升时的类型为char，则前面补1
//	//11111111111111111111111110000000
//	//打印时把它看作无符号整形打印
//
//	return 0;
//}


//#include <windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		arr[i] = -1 - i;
//	}
//	printf("%zu", strlen(arr));
//	return 0;
////}
//int main()
//{
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		exit(0);
//	}
//	char a;
//	a=fgetc(fp);
//	printf("%c", a);
//	fclose(fp);
//
//	return 0;
//}
//int main()
//{
//	int a, n;
//	int sum = 0, temp = 0;
//	scanf("%d%d", &a, &n);
//	for (int i = 0; i < n; i++)
//	{
//		temp = temp * 10 + a;
//		sum += temp;
//	}
//	printf("%d", sum);
//	return 0;
//}
//#define N 150
//int main()
//{
//	//fputs("hello", stdout);
//	char a[10];
//	scanf("%s", a);
//	printf("%s", a);
//	return 0;
//}