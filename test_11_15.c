#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void main(void)
//{
//    int n, m;
//    scanf("%d", &n);//1273
//    m = 0;
//    while (n > 0) {
//        m = m * 10 + n % 10;//m=3  n=127   m=37   n=12   m=372   n=1    m=3721
//        n /= 10;
//    }
//    printf("%d", m);
//    return 0;
//}
//#include <stdio.h>
//void main()
//{
//    int m = 0, sum = 0;
//    char c, oldc = '+';
//    do {
//        c = getchar();
//        if (c <= '9' && c >= '0')
//            m = 10 * m + c - '0';
//        else {
//            if (oldc == '+')
//                sum += m;
//            else
//                sum -= m;
//            m = 0;
//            oldc = c;
//            printf("%d#", sum);
//        }
//    } while (c != '=');
//    return;
//}
#include <stdio.h>
//int main()
//{
//	int i = 1;
//	while (i %= 4)
//	{
//		i += 5;
//		printf("%d", i);//678
//	}
//	return 0;
//}
//int main()
//{
//
//	int n = 0;
//	while (n <= 4)
//		switch (n)
//		{
//		case 0:printf("#");
//		default:printf("%d", ++n);
//		case 2:printf("*");
//		case 1:printf("%d", n++);
//		}//#1*1*24*4
//	
//	return 0;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);//1 4 6 5 3 2 0
//	while (b)
//	{
//		if (a < b)
//			printf("y");
//		else
//			printf("n");
//		a = b;
//		scanf("%d", &b);
//	}
//	printf("%d%d", a, b);//yynnn20
//	
//	return 0;
//}
//int main()
//{
//	int i, s = 0,j;
//	for (i = 1; i <= 2; i++)
//	{
//		for (j = 1; j <= i; j++)
//			s += i * j;
//		printf("%d%d%d\n", s, i, j);
//	}
//	printf("%d%d%d", s, i, j);
//
//	return 0;
//}
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (90 < x <= 100)printf("A");
//	if (80 <= x < 90)printf("B");
//	if (70 <= x < 80)printf("C");
//	if (60 <= x < 70)printf("D");
//	if (0 < x < 60)printf("E");
//	return 0;
//}