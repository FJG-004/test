#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//                                                                     打印100-200中所有素数
//int su(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)   //2到n-1
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
//                                                                                  闰年
//int run(int n)//返回类型不写时默认int
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
//                                                                               米奇妙妙屋
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
//每调用一次函数，num+1
//void Add(int* p)//void和int,return 0
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
//                                                                         函数的嵌套调用和链式访问
//函数可以嵌套调用，不能嵌套定义
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
//	int test()//这样就是嵌套定义
//
//	return 0;
//}
//                                                                                链式访问
//int main()
//{
	//int len = strlen("abc");
	//printf("%d", len);
	//链式访问
	//1.printf("%d", strlen("abc"));

	/*char arr1[20] = { 0 };
	char arr2[] =  "bit" ;*/

	//strcpy(arr1, arr2);//strcpy将arr2拷贝到arr1
	//printf("%s", arr1);
	/*printf("%s", strcpy(arr1, arr2));*/

	//printf("%d", printf("%d", printf("%d", 43)));//printf返回的是打印在屏幕上的字符的个数
	//43为2个，2为1个，故为4321

	//return 0;
//}
//                                                                             函数的声明和定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ADD(int x, int y);//函数的声明
//	int c = ADD(a, b);
//
//	printf("%d", c);
//
//	return 0;
//}
//int ADD(int x, int y)//函数的定义
//{
//	return x + y;
//}
//                                                                                                       引用
//#include "add.h"//这个文件名只能.h结尾？               双引号用于引用外部文件文件名
//// 函数的声明一般放在头文件中
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
//                                                                                                      静态库
#include "sub.h"//引用头文件

#pragma comment(lib,"sub.lib")//引用静态库

int main()
{
	int a = 10;
	int b = 20;
	int c = sub(a, b);

	printf("%d",c);

	return 0;
}
