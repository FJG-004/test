#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                              �����ֵ
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
//	printf("%d", ADD);//�����ĵ���
//
//	return 0;
//}
//                                                                         �������α�����ֵ
// 1.ʧ��(�½������е�x,y�ĵ�ַ��a,b��ͬ�������޹�ϵ���ʸ���ʧ�ܣ�
//void swap(int x, int y)//void��ʾ�ú����������κ�ֵ��Ҳ����Ҫ�����κ�ֵ
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
// 2.�ɹ����������ⲿ�ͺ����ڲ���ϵ����Ҫ�õ�ַ��
//void swap(int *px, int *py)//��ʽ�������βΣ�
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
//	swap(&a, &b);//ʵ�ʲ�����ʵ�Σ�
//
//	printf("2.%d,%d", a, b);
//
//	return 0;
//}
// 
//returnֻ�ܷ���һ��ֵ
//
int main()
{



	return 0;
}