#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", ADD);
//	printf("%p\n", &ADD);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = &ADD;
//	int ret = (*pf)(3, 2);
//
//	printf("%d", ret);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int, int) = &ADD;
//	int ret1 = (*p)(3, 2);
//	int ret2 = ADD(3, 2);
//	int ret3 = p(3, 2);//*可有可无
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	printf("%d\n", ret3);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//void PRI(int (*p)(int, int))
//{
//	int a = 3;
//	int b = 2;
//	int ret = p(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	PRI(ADD);
//
//	return 0;
//}


//int main()
//{
//    (*(void (*)())0)();
//
//    void(*signal(int, void (*)(int)))(int);
//    //分析：以上是一次函数声明
//    //函数名signal，有两个参数，一个是int
//    //一个是void(*)(int)函数指针，指向的是int,返回值是void
//    //函数的返回值也是void(*)()函数指针，指向的是int,返回值是void
//    typedef void(*vp)(int);//相当于把void(*)(int)重命名为vp
//    vp signal(int, vp);
//
//    return 0;
//}


//int main()
//{
//	int arr[5];//整形数组，每个元素的类型是int
//	int* parr1[10];//整形指针数组，每个元素的类型是int*
//	int (*parr2)[10];//整形数组指针，指向的是元素个数为10的数组
//	int (*parr3[10])[5];//存放数组指针的数组
//	//分析：parr3是数组名，数组中有10个元素，每个元素的类型(数组类型)是int (*) [5]
// 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int (*p)[10] = &arr;//数组指针即存放数组地址的指针
//
//	return 0;
//}
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
//	int input = -1;
//	int a, b;
//	int ret;
//	do
//	{
//		menu();
//		printf("您要进行的操作是:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &a, &b);
//			ret = Add(a, b);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &a, &b);
//			ret = Sub(a, b);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &a, &b);
//			ret = Mul(a, b);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &a, &b);
//			ret = Div(a, b);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//
//	return 0;
//}
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
//void calc(int (*p)(int, int))
//{
//	printf("请输入两个操作数:>");
//	int a, b;
//	int ret = 0;
//	scanf("%d%d", &a, &b);
//	ret = (*p)(a, b);
//	printf("%d\n", ret);
//
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
//	int input = -1;
//	do
//	{
//		menu();
//		printf("您要进行的操作是:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//
//
//	return 0;
//}