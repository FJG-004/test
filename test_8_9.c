#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//                                                                            函数的递归(大事化小）
//                                                                            打印一个数各个位上的数
//void print(int n)
//{
//	if (n > 9)//if用来判断，只执行一次。而程序执行是有顺序的，先看见什么就输出什么
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);//巧妙的空格
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}
//                                                                                  栈溢出
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//	
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//递归的条件
//1.不能死递归，要有跳出条件，每次递归都越接近跳出条件；
//2.递归层次不能太深。
//                                                                          不用strlen求字符串长度
//                                                                          1.创建临时变量的做法
//int my_str(char* str)
//{
//	int count = 0;//创建临时变量
//	while (*str != '\0')
//	{
//		count++;
//	    str++;                                                   //地址+1的意思是往后挪一个位置到下一个元素
//	} 
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", my_str(arr));                                //数组名相当于首元素地址，也就是传过去的是'a'的地址
//
//	return 0;
//}
//                                                                       2.不创建临时变量的做法(递归）
//int my_str(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_str(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", my_str(arr));
//
//	return 0;
//}