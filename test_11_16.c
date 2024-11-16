#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* p = a;
//	printf("%d\n", *(p + 1));
//	printf("%d\n\n", *p);
//	printf("%d\n", *(++p));
//	printf("%d\n", *p);
//	
//	return 0;
//}
//int main()
//{
//	int a[3],*p=NULL,i;
//	p = a;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &p[i]);
//	}
//	p = a;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d", p[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int sum,lines=0;
//	scanf("%d", &sum);
//	while (lines * lines * 2 - 1 <= sum)
//	{
//		lines++;
//	}
//	lines--;
//	for (int i = lines; i > 0; i--)
//	{
//		for (int t = 0; t < lines - i; t++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	for (int i = 2; i <= lines; i++)
//	{
//		for (int t = 0; t < lines - i; t++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	printf("%d", sum - (lines * lines * 2 - 1));
//	
//	return 0;
//}