#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(a));//就只有6个
//	printf("%d\n", sizeof(a[0]+1));//整形提升
//
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(a));//随机值(直到找到\0)
//	printf("%d\n", strlen(a + 0));//随机值
//
//	//printf("%d\n", strlen(*a));
//	//strlen认为传给她的是地址，则strlen会访问61('a'的ASCII值的十六进制)处的地址
//	//很危险
//	//printf("%d\n", strlen(a[1]));
//	
//	printf("%d\n", strlen(&a));//随机值
//	//这里的随机值和strlen(a)一样，虽然两个地址的类型不一样
//	//但是strlen接收的类型永远是以char*接收的
//	printf("%d\n", strlen(&a + 1));//随机值 - 6
//	printf("%d\n", strlen(&a[0] + 1));//随机值 - 1
//
//
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));//7
//	printf("%d\n", sizeof(a + 0));//4  /  8
//
//	printf("%d\n", sizeof(*a));//1
//	printf("%d\n", sizeof(a[1]));//1
//
//	printf("%d\n", sizeof(&a));//4  /  8
//	printf("%d\n", sizeof(&a + 1));//跳过整个数组的地址4  /  8
//	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址4  /  8
//
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", strlen(a));//6
//	printf("%d\n", strlen(a + 0));//6
//
//	printf("%d\n", strlen(*a));//err
//	printf("%d\n", strlen(a[1]));//err
//
//	printf("%d\n", strlen(&a));//6
//	printf("%d\n", strlen(&a + 1));//随机值
//	printf("%d\n", strlen(&a[0] + 1));//5
//
//	return 0;
//}
//int main()
//{
//	char *p = "abcdef";
//		printf("%d\n", sizeof(p));//4  /  8
//		//指针变量中存放的是'a'的地址
//		printf("%d\n", sizeof(p + 1));//'b'的地址4  /  8
//	
//		printf("%d\n", sizeof(*p));//1
//		printf("%d\n", sizeof(p[0]));//1
//	
//		printf("%d\n", sizeof(&p));//4  /  8
//		//"abcdef"储存在常量储存区，而p的数据存放在栈区
//		//两个东西不一样，&p取的是栈区中的地址
//		printf("%d\n", sizeof(&p + 1));
//		//p在储存位置跳过一个指针变量大小后的地址
//		printf("%d\n", sizeof(&p[0] + 1));//'b'的地址
//	
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", (p));//6
//	printf("%d\n", strlen(p + 1));//5
//
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值(和上面那个随机值没关系)
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	//单独放，表示整个二维数组的大小
//	printf("%d\n",sizeof(a[0][0]));//首元素大小4
//	printf("%d\n",sizeof(a[0]));//16
//	//单独放，表示第一行的数组大小
//	printf("%d\n",sizeof(a[0] + 1));//4  /  8
//	//这里的a[0]表示&a[0][0],最后是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//第一行第二个元素4
//	printf("%d\n",sizeof(a + 1));//4  /  8
//	//这里的a表示a[0]第一行的地址，+1是第二行的地址
//	printf("%d\n",sizeof(*(a + 1)));//第二行的数组大小16
//	printf("%d\n",sizeof(&a[0] + 1));//第二行的地址4  /  8
//	printf("%d\n",sizeof(*(&a[0] + 1)));//第二行数组大小16
//	printf("%d\n",sizeof(*a));//16
//	//a表示第一行的地址，最后是第一行
//	printf("%d\n",sizeof(a[3]));//16
//	//sizeof只要知道类型，就能知道几个字节
//	//例如sizeof(int)
//
//		return 0;
//}
//struct Test
//{
//int Num;
//char* pcName;
//short sDate;
//char cha[2];
//short sBa[4];
//}*p = (struct Test*)0x100000;
////假设p的值为0x100000.如下表表达式的值分别为多少?
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}