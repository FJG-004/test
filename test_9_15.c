#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                     计算各个数据类型的大小
//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//
//	return 0;
//}
//int main()
//{
//	int a = 9 + 3 * 4;
//	printf("%d", a);
//
//	return 0;
//}
//int main()
//{
//	int a = 159;
//	int b = 0;
//	while (a % 10)
//	{
//		b += a % 10;
//		a = a / 10;
//	}
//
//	printf("%d", b);
//	return 0;
//}
//                                                     考虑运算符的优先级和结合性
//int main()
//{
//	int a = 3;
//	a += a -= a * a;
//	int b = 3;
//	b += b -= b *= b;
//	printf("a=%d\nb=%d\n", a,b);
//	return 0;
//}
//                                                                   m=-n++;  m=-++n;
//int main()
//{
//	//int n = 3;
//	//int m = -n++;//等价于m = -n;   n = n + 1;
//	//printf("%d\n%d\n", m,n);
//	int n = 3;
//	int m = -++n;//等价于n = n + 1;   m=-n;
//	printf("%d\n%d\n", m, n);
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    printf("  A  \n");
//    printf("A   A\n");
//    printf("  A  \n");
//    return 0;
//}
//float和double的区别
//int main()
//{
//	/*float a = 123456789e1;          //数太大好像超出float的范围了，小一点就行了
//	printf("%f\n", a);
//	double b = 123456789e1;
//	printf("%lf\n", b);*/    
//
//	float a = 0.123456789;
//	printf("%f\n", a);
//	double b = 0.123456789;
//	printf("%lf\n", b);             //%f或者%lf表示默认的输出为小数点后六位！！！！！！
//	                                //不足六位以 0 补齐，超过六位按四舍五入截断。
//	                                    
//	float c = 144.24324556;
//	printf("%.8f\n", c);
//	double d = 144.24324556;//%.8f的意思是输出小数点后八位，而float类型 的C因为只能保留到小数点后6~7位，
//	                        //所以进行了四舍五入（好像是随机的，待定），而double类型的d则可以准确的输出。
//	printf("%.8f\n", d);
//	return 0;
//}
//                                                                强制类型转换
//int main()
//{
//	int a = 5;
//	printf("a/2=%d\n", a / 2);
//	printf("(float)(a/2)=%f\n", (float)(a / 2));
//	printf("(float)a/2=%f\n",(float)a/2);
//	printf("a=%d\n", a);
//
//
//	return 0;
//}