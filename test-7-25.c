#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                         操作符（续）
// 
//                                                                                          ++前后置
//int main()
//{
	//int a = 10;
	//int b = a++;//后置++先使用，后++

	//printf("%d\n", b);//10
	//printf("%d\n", a);//11

	//int a = 10;
	//int b = ++a;//前置++先++，后使用

	//printf("%d\n", b);//11
	//printf("%d\n", a);//11

	//return 0;
//}
//                                                                                     ++前后置（加深理解）
//int main()
//{
//	int a = 10;
//
//	printf("%d\n", a++);//10         a++ 表示取a的地址，把它的值装入寄存器，然后增加内存中a的值；
//	printf("%d\n", a);//11           这里就是11
//	printf("%d\n", ++a);//12         ++a 表示取a地址，增加它的内容，然后把值放在寄存器中
//
//
//	return 0;
//}
//int main()
//{
	//                                                                              ||逻辑或（一方为真就是1）
	/*int a = 7;
	int b = 9;
	int c = a || b;

	printf("%d\n", c);

	if (a || b)
	{
		printf("666");
	}
	else
	{
		printf("555");
	}*/
	//                                                                             &&逻辑与（两方都为真才是1）
	/*int a = 0;
	int b = 7;
	int c = a && b;

	printf("%d\n", c);


	if (a && b)
	{
		printf("666");
	}
	else
	{
		printf("555");
	}*/

	//return 0;
//}
//                                                                                         求最大值
//int main()
//{
//	int a = 10;
//	int b = 3;
//	int Max = 0;
//	                                                                                       （常规）
	/*if (a > b)
	{
		Max = a;
	}
	else
	{
		Max = b;
	}*/
//	                                                                                    （三目操作符）
//	Max = a > b ? a : b;
//	翻译：exp1 ? exp2 : exp3
//	exp1成立，计算exp2
//	exp1不成立，计算exp3
//
//	printf("%d\n", max);
//
//	return 0;
//}
//                                                                              逗号表达式（逗号隔开的表达式）          
//int main()
//{
//	int a = 6;
//	int b = 7;
//	int c = 9;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式从左往右依次计算
//	//最后一个的结果是整个表达式的结果
//
//	printf("%d", d);
//
//	return 0;
//}
//                                                                                     下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//这个[]不是
//	printf("%d", arr[5]);//这里的[]为下标引用操作符
//
//	return 0;
//}
//                                                                                     函数调用操作符
//int main()
//{
//	printf("hehe\n");//()就是函数调用操作符
//
//
//	return 0;
//}
