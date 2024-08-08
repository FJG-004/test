#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                              求最大值
//1.int MAX(int x,int y)                     2.int MAX(int x,int y)
//{                                        {
//	if(x>y)                                   int z = 0;
//	{                                           if(x>y)
//		return x;                             {
//	}                                            z = x;
//	else                                      }
//	{                                         else
//		return y;                            {
//	}                                            z = y;
//                                            }
//}                                             return z;
//int main()                                }
//{
//	int a = 10;
//	int b = 20;
//	int ADD = MAX(a,b);
//
//	printf("%d", ADD);//函数的调用
//
//	return 0;
//}
//                                                                         交换整形变量的值
// 1.失败(新建函数中的x,y的地址与a,b不同，二者无关系，故更改失败）
//void swap(int x, int y)//void表示该函数不返回任何值，也不需要返回任何值
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("1.%d,%d\n", a, b);
//
//	swap(a, b);
//
//	printf("2.%d,%d", a, b);
//
//	return 0;
//}
// 2.成功（将函数外部和函数内部联系，需要用地址）
//void swap(int *px, int *py)//形式参数（形参）
//{
//	int z = 0;
//	z =* px;
//	*px = *py;
//	*py = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("1.%d,%d\n", a, b);
//
//	swap(&a, &b);//实际参数（实参）
//
//	printf("2.%d,%d", a, b);
//
//	return 0;
//}
// 
//return只能返回一个值
//
int main()
{



	return 0;
}
