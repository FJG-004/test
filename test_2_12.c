#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.Add   2.Sub****\n");
//	printf("****3.Mul   4.Div****\n");
//	printf("****0.Exit       ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	int (*arr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	int input = -1;
//	int x, y;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��������еĲ���:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳������\n");
//		}
//		else if (input > 0 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			ret = arr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//
//	return 0;
//}
//#include <stdlib.h>
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int compare_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int compare_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	qsort(s, sz, sizeof(s[0]), compare_name);
//	
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int compare_int(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//void Swap(char* e1, char* e2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char temp = *e1;
//		*e1 = *e2;
//		*e2 = temp;
//		e1++;
//		e2++;
//	}
//}
//void Bubble_sort(void* base, int num, int width, int (*compare)(const void* e1, const void* e2))
//{
//	for (int i = 0; i < num - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < num - 1 - i; j++)
//		{
//			if (compare((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void test()
//{
//	int arr[] = { 19875,2447,234,564,56,798,489,434,762 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	Bubble_sort(arr, sz, sizeof(arr[0]), compare_int);
//
//}
//int main()
//{
//	
//	test();
//
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	//���������������Ĵ�С
//	printf("%d\n", sizeof(a + 0));//4 / 8
//	//a���ǵ�������sizeof�У���a��������Ԫ�ص�ַ��a+0������Ԫ�ص�ַ
//	printf("%d\n", sizeof(a + 1));//4 / 8
//	//�ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a));//4 / 8
//	//ȡ��������������ĵ�ַ�������ǵ�ַ����ַ�Ĵ�С����4��8���ֽ�
//	printf("%d\n", sizeof(*&a));//16
//	//ȡ��������������ĵ�ַ��������Ҳ�ǽ⿪��������
//	printf("%d\n", sizeof(&a + 1));//4 / 8
//	//Ψһע��+1����������������
//	//�����ĵ�ַ
//	printf("%d\n", &a[0] + 1);
//	//�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}