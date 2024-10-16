#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    float a, b;
//    scanf("%f %f", &a, &b);
//    int c = (a - b) * 100 / b;
//    int d = b * 1.1;
//    if (a < d)
//        printf("OK");
//    if (a >= d && a < (int)b * 1.5)
//    {
//        printf("Exceed %d%%. Ticket 200", c);
//    }
//    if (a >= (float)b * 1.5)
//        printf("Exceed %d%%. License Revoked", c);
//    return 0;
//}
//int main()
//{
//	int fahr;
//	double celsius;
//	for (fahr = 91; fahr <= 100; fahr++)
//		celsius = 5.0 * (fahr - 32) / 9.0;
//	printf("%4d%6.1f\n", fahr, celsius);//
//	return 0;
//}
#include <stdio.h>
//int main()//420
//{
//    char c;
//    while ((c = getchar()) != '\n')
//        switch (c - '0') {
//        case 0:
//        case 1:putchar(c + 2);
//        case 2:putchar(c + 3); break;
//        case 3:putchar(c + 4);
//        default:putchar(c + 1); break;
//        }
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    int number;
//    int sum, n;
//    double average;
//    n = 0;
//    sum = 0;
//    scanf("%d", &number);
//
//    while ( number != 0) 
//   {
//        if (number % 2 == 0) 
//       {
//            sum += number;
//            n++;
//        }
//
//        scanf(" %d", &number);
//    }
//
//    average = sum / n;
//    
//    printf("%.2lf\n", average);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i;
//    int f[20] = { 1,1 };
//    for (i = 2; i < 20; i++)
//        f[i] =
//        f[i - 1] + f[i - 2];
//
//    for (i = 0; i < 20; i++)
//    {
//        if ( (i+1) % 4 == 0)
//            printf("\n");
//        printf("%d ", f[i]);
//    }
//    return 0;
//}
#include <stdio.h>
//int main(void)
//{
//    int m, n, r;
//    scanf(
//        "%d%d", &m, &n
//    );  //输入数据存储到变量m和n中
//    do
//    {
//        r =
//            m
//            ;
//        m = n;
//
//        n = r % n
//            ;
//    } while (
//        m % n != 0
//        );
//    printf(
//        "%d", n
//    );  //输出最大公约数
//    return 0;
//}
#include <math.h>
#include <stdio.h>
//int main()
//{
//    int  f = 1;
//    float e, pi = 0.0, t = 1.0, n = 1.0;
//    scanf("%f", &e);
//    while (  t>e )
//    {
//        pi = pi + t;
//        n = n + 2;
//        f = -f;
//        t = f / n;
//    }
//    printf("result=%f",  pi * 4.0 );
//    return 0;
//}
//

#include <stdio.h>

#include <stdio.h>
//int main()
//{
//    int n, k, s=0, i, a,b,c=0;
//    scanf("%d%d", &n, &k);
//    for (i = 1; ; i++)
//    {
//        b = 1;
//        for (a = 2; a < n; a++)
//        {
//            if (n % a == 0)
//            {
//                b = 0;
//                break;
//            }
//        }
//        if (b == 1)
//        {
//            printf("%d+", n);
//            c++;
//            s += n;
//        }
//        n--;
//        if (c == k)
//        {
//            printf("%d=", n);
//            break;
//        }
//    }
//    printf("%d", s);
//    return 0;
//}
//                                                                   求n以内最大的k个素数以及它们的和
#include <stdio.h>
//int main()
//{
//    int n, k, s = 0, i, a, b, c = 0;
//    scanf("%d %d", &n, &k);
//    for (i = 1;; i++)
//    {
//        b = 1;
//        for (a = 2; a < n; a++)
//        {
//            if (n % a == 0)
//            {
//                b = 0;
//                break;
//            }
//        }
//        if (b == 1)
//        {
//            printf("%d", n);
//            c++;
//            s += n;
//        }
//        n--;
//        if (n == 1)
//        {
//            printf("=", n);
//            break;
//        }
//        if (c != k && b == 1)
//            printf("+");
//        if (c == k)
//        {
//            printf("=", n);
//            break;
//        }
//    }
//    printf("%d", s);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int c = (a - b) * 100 / b;
//    if (a <= b)
//        printf("OK\n");
//    else if (c <= 10)
//    {
//        printf("Exceed %d%%. Ticket 200", c);
//    }
//    else
//        printf("Exceed %d%%. License Revoked", (int)c);
//    return 0;
//}