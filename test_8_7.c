#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//                                                                     ��ӡ100-200����������
//int su(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)   //2��n-1
//	{
//		if (n % j == 0)
//
//			return 0;
//
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (su(i) == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//
//	printf("count=%d", count);
//	return 0;
//}
//                                                                                  ����
//int run(int n)//�������Ͳ�дʱĬ��int
//{
//	if((n % 4==0 && n % 100!=0) ||( n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if(run(i)==1)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}
//                                                                               ����������
//int run(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//int main()
//{
//	int i = 0;
//
//		for (i = 1000; i <= 2000; i++)
//		{
//			if(run(i)==1)
//			{
//				printf("%d\n", i);
//			}
//		}
//
//
//	return 0;
//}
//ÿ����һ�κ�����num+1
//void Add(int* p)//void��int,return 0
//{
//	(* p)++;
//	
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//
//	printf("%d\n", num);
//	Add(&num);
//
//	printf("%d\n", num);
//	Add(&num);
//
//	printf("%d\n", num);
//
//	return 0;
//}
//                                                                         ������Ƕ�׵��ú���ʽ����
//��������Ƕ�׵��ã�����Ƕ�׶���
//void test2()
//{
//	printf("hehe\n");
//}
//int test()
//{
//	test2();
//	return 0;
//}
//int main()
//{
//
//	test();
//	printf("haha");
//
//	return 0;
//}

//int main()
//{
//
//	int test()//��������Ƕ�׶���
//
//	return 0;
//}
//                                                                                ��ʽ����
//int main()
//{
	//int len = strlen("abc");
	//printf("%d", len);
	//��ʽ����
	//1.printf("%d", strlen("abc"));

	/*char arr1[20] = { 0 };
	char arr2[] =  "bit" ;*/

	//strcpy(arr1, arr2);//strcpy��arr2������arr1
	//printf("%s", arr1);
	/*printf("%s", strcpy(arr1, arr2));*/

	//printf("%d", printf("%d", printf("%d", 43)));//printf���ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	//43Ϊ2����2Ϊ1������Ϊ4321

	//return 0;
//}
//                                                                             �����������Ͷ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ADD(int x, int y);//����������
//	int c = ADD(a, b);
//
//	printf("%d", c);
//
//	return 0;
//}
//int ADD(int x, int y)//�����Ķ���
//{
//	return x + y;
//}
//                                                                                                       ����
//#include "add.h"//����ļ���ֻ��.h��β��               ˫�������������ⲿ�ļ��ļ���
//// ����������һ�����ͷ�ļ���
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//
//	printf("%d",c);
//
//	return 0;
//}
//                                                                                                      ��̬��
#include "sub.h"//����ͷ�ļ�

#pragma comment(lib,"sub.lib")//���þ�̬��

int main()
{
	int a = 10;
	int b = 20;
	int c = sub(a, b);

	printf("%d",c);

	return 0;
}
