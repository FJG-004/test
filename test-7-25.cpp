#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                         ������������
// 
//                                                                                          ++ǰ����
//int main()
//{
	//int a = 10;
	//int b = a++;//����++��ʹ�ã���++

	//printf("%d\n", b);//10
	//printf("%d\n", a);//11

	//int a = 10;
	//int b = ++a;//ǰ��++��++����ʹ��

	//printf("%d\n", b);//11
	//printf("%d\n", a);//11

	//return 0;
//}
//                                                                                     ++ǰ���ã�������⣩
//int main()
//{
//	int a = 10;
//
//	printf("%d\n", a++);//10         a++ ��ʾȡa�ĵ�ַ��������ֵװ��Ĵ�����Ȼ�������ڴ���a��ֵ��
//	printf("%d\n", a);//11           �������11
//	printf("%d\n", ++a);//12         ++a ��ʾȡa��ַ�������������ݣ�Ȼ���ֵ���ڼĴ�����
//
//
//	return 0;
//}
//int main()
//{
	//                                                                              ||�߼���һ��Ϊ�����1��
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
	//                                                                             &&�߼��루������Ϊ�����1��
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
//                                                                                         �����ֵ
//int main()
//{
//	int a = 10;
//	int b = 3;
//	int Max = 0;
//	                                                                                       �����棩
	/*if (a > b)
	{
		Max = a;
	}
	else
	{
		Max = b;
	}*/
//	                                                                                    ����Ŀ��������
//	Max = a > b ? a : b;
//	���룺exp1 ? exp2 : exp3
//	exp1����������exp2
//	exp1������������exp3
//
//	printf("%d\n", max);
//
//	return 0;
//}
//                                                                              ���ű��ʽ�����Ÿ����ı��ʽ��          
//int main()
//{
//	int a = 6;
//	int b = 7;
//	int c = 9;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ�����������μ���
//	//���һ���Ľ�����������ʽ�Ľ��
//
//	printf("%d", d);
//
//	return 0;
//}
//                                                                                     �±����ò�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//���[]����
//	printf("%d", arr[5]);//�����[]Ϊ�±����ò�����
//
//	return 0;
//}
//                                                                                     �������ò�����
//int main()
//{
//	printf("hehe\n");//()���Ǻ������ò�����
//
//
//	return 0;
//}