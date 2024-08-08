#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                    define是一个预处理指令
//                                                                                      1.define定义常量
//#define Max 100
//int main()
//{
//	printf("%d", Max);
//
//	return 0;
//}
//                                                                                       2.define定义宏
//#define ADD(x,y) x+y//（x+y）这样才是20
//int main()
//{
//	printf("%d", 4*ADD(2, 3));//宏其实就是替换，这里就成立4*2+3，就是11
//
//
//	return 0;
//}
// 
//                                                                                       指针（就是地址）

//1.内存是怎么编号的？                  64位，64根地址线，0/1，2的64次方
//2.一个这样的内存单元是多大空间？      一个内存单元是一个字节，然后分配地址的
//内存是电脑上特别重要的存储器，计算机中所有程序的运行都是在内存中进行的。
//所以为了有效的使用内存，就把内存划分成一个个小的内存单元，每个内存单元的大小是1个字节。
//为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号被称为该内存单元的地址。


//int main()
//{
//	int a = 5;//a在内存中要分配空间的，4个字节（注意调试中的取地址给的是第一个字节的地址，往后用ASCII类推)
//
//	printf("%p", &a);//%p专门用来打印地址的
//
//	int *pa = &a;// 是用来存放地址的，在c语言中pa叫是指针变量
//		//*说明pa是指针变量
//		//int说明pa执行的对象是int类型的
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	*pa = 20; //*就是解引用操作，*pa就是通过pa里边的地址找到a
//
//	printf("%d", a);
//
//	return 0;
//}//指针就是直接找到地址赋值，直接赋值是先遍历找地址然后赋值，太慢

//                                                                                    指针变量的大小
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));

	//指针的大小是相同的！
	//	为什呢？
	//	指针是用来地址的！
	//	指针需要多大空间，取决于地址的储存需要多大空间

	//指针大小在32为平台为4位字节，64位平台为8位字节

//	return 0;
//}
//                                                                                       结构体
//结构体是C语言中特别重要的知识点，结构体使得C语言有能力描述复杂类型。
//比如描述学生，学生包含：名学 + 年龄 + 性别 + 学号这几项信息。
//这里只能使用结构体来描述了。
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//
//};
//int main()
//{
//	struct Stu s = {"张三", 18,86.6};//结构体的创建和初始化                    // ,也要用英文的，我真服了
//	printf("1.%s\n %d\n %lf\n",s.name, s.age,s.score);//结构体变量.成员变量
//
//	struct Stu* ps = &s;//结构体的地址交给指针变量
//	printf("2. % s\n % d\n % lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3. % s\n % d\n % lf\n", ps->name, ps->age, ps->score);//结构指针->成员变量名
//
//	return 0;
//}
