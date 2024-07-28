#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                     关键字

//int main()
//{
//	int a = 10;//auto自动创建，自动销毁/自动变量
//
//
//
//	return 0;
//}
//                                                                               register寄存器关键字
//int main()
//{
//	register int a = 100;//register是“建议”将a放到寄存器中
//
//
//	return 0;
//}


//define，include都是预处理指令，不是关键字


//signed有符号的  50  -50
//unsigned无符号的


//                                                                               typedef重新定义变量
//typedef unsigned int zbc;
//int main()
//{
//	zbc a = 100;
//
//	printf("%d", a);
//
//	return 0;
//}
//                                             1.static修饰局部变量，改变了局部变量的生命周期（实质是改变了变量的存储类型）
//void test()
//{                                                        栈区（局部变量，函数的参数）
//	static int a = 1;这个是2到11                           堆区（动态内存分配的）
//	//int a = 1;//这个结果为10个2                          静态区（全局变量，static修饰的，静态变量）
//	a++;
//	printf("%d", a);
//}//普通的到这里就销毁了，static修饰后就不会销毁
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//                                                                                 2.static修饰全局变量
 
//static int a = 1;

 //static修饰全局变量，使得这个全局变量只能在自己所在的源文件(.c)内部可以使用
//其他源文件不能使用！
//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
//但是被static修饰之后，就变成了丙部链接属性，其他源文件就不能链接到这个静态的全局变量了
//                                                                          3.static修饰函数（跟修饰全局变量差不多）
//extern int ADD(int x, int y);
//
//int main()
//{
//	int a = 6;
//	int b = 5;
//	int c= ADD(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}