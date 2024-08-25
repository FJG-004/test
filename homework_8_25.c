#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                   将一个数的各个位加起来
//int test(int i)
//{
//	if (i / 10 != 0)
//	{
//		return i % 10 + test(i / 10);
//	}
//	else
//	{
//		return i;
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	test(i);
//
//	printf("%d", test(i));
//	return 0;
//}
//                                                      用递归求出n的k次方
//                                                           1.非递归
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	scanf("%d%d", &n, &k);
//	int t = n;
//	for(i=1;i<k;i++)
//	{
//		n *= t;
//	}
//
//	printf("%d", n);
//
//	return 0;
//}
//int main()
//{
//
//
//
//	return 0;
//}
//                                                       2.编写一个函数且递归
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1.0;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else//考虑k为负数的情况
//	{
//		return 1.0 / Pow(n, -k);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n,k);
//
//	printf("%lf", ret);
//
//	return 0;
//}