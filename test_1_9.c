#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char a = -1;
//	unsigned char b = -1;
//	printf("%d\n", a);
//	printf("%d\n", b);
//    //ǰ�沿����һ���ģ����b�д������11111111
//	//�ڴ�ӡ�Ĺ����У�����������b������Ϊunsigned char����ǰ�油0
//	//Ҫ��ӡ�ľ���00000000000000000000000011111111
//	//��Ϊ255
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//a�д洢����10000000
//	printf("%u", a);
//	//a��������ʱ������Ϊchar����ǰ�油1
//	//11111111111111111111111110000000
//	//��ӡʱ���������޷������δ�ӡ
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