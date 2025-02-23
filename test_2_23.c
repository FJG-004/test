#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stddef.h>
//struct STD1
//{
//	double a;
//	char b;
//	int c;
//};
//struct STD2
//{
//	char a1;
//	struct STD1 b1;
//	int c1;
//};
//int main()
//{
//	printf("%d\n",sizeof(struct STD2));
//
//	return 0;
//}
//struct std1
//{
//	char a1;
//	int b1;
//	char c1;
//};
//struct std2
//{
//	char a1;
//	char c1;
//	int b1;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct std1));
//	printf("%d\n", sizeof(struct std2));
//	return 0;
//}
//struct STD1
//{
//	int data[100];
//	int age;
//}s1 = { {1,2,3},18 };
//void Print1(struct STD1 s)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", s.data[i]);
//	}
//	printf("%d\n", s.age);
//
//}
//void Print2(struct STD1* s)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", s->data[i]);
//	}
//	printf("%d\n", s->age);
//
//}
//int main()
//{
//	Print1(s1);
//	Print2(&s1);
//
//	return 0;
//}