#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                     ��������������͵Ĵ�С
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
//                                                     ��������������ȼ��ͽ����
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
//	//int m = -n++;//�ȼ���m = -n;   n = n + 1;
//	//printf("%d\n%d\n", m,n);
//	int n = 3;
//	int m = -++n;//�ȼ���n = n + 1;   m=-n;
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
//float��double������
//int main()
//{
//	/*float a = 123456789e1;          //��̫����񳬳�float�ķ�Χ�ˣ�Сһ�������
//	printf("%f\n", a);
//	double b = 123456789e1;
//	printf("%lf\n", b);*/    
//
//	float a = 0.123456789;
//	printf("%f\n", a);
//	double b = 0.123456789;
//	printf("%lf\n", b);             //%f����%lf��ʾĬ�ϵ����ΪС�������λ������������
//	                                //������λ�� 0 ���룬������λ����������ضϡ�
//	                                    
//	float c = 144.24324556;
//	printf("%.8f\n", c);
//	double d = 144.24324556;//%.8f����˼�����С������λ����float���� ��C��Ϊֻ�ܱ�����С�����6~7λ��
//	                        //���Խ������������루����������ģ�����������double���͵�d�����׼ȷ�������
//	printf("%.8f\n", d);
//	return 0;
//}
//                                                                ǿ������ת��
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