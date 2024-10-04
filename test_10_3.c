#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int hour, min;
//    scanf("%d:%d", &hour, &min);
//    if (hour < 12)
//    {
//        printf("%d:%d AM", hour, min);
//    }
//    else if (hour > 12)
//    {
//        printf("%d:%d PM", hour - 12, min);
//    }
//    else
//    {
//        printf("%d:%d PM", hour, min);
//    }
//    return 0;
//}
/* 程序段B */	//死循环
//int main()
//{
//    int s = 0;
//    int i = 1;
//    while (i <= 10)                                 //等于10后就循环了
// {
//        if (i % 2 == 0) 
//        {
//            continue;
//        }
//        s = s + i;
//        i++;
//    }
//    printf("%d", s);
//}
//                                                           疑问？？？？
//int main()
//{
//    int a, i;
//    for (a = 1, i = -1; -1 <= i < 1; i++) 
//    {
//        a++;
//        printf("%2d", a);
//    }
//    printf("%d", i);
//}
//                                                                  两个等价
//int main()
//{
//    int i = 5, s = 0;
//    do {
//        if (i % 2) continue;
//        else s += i;
//    } while (--i);
//    printf("%d", s);
//}
//int main()
//{
//    int i = 5, s = 0;
//    while (i--)
//        if (i % 2) continue;
//        else s += i;
//        printf("%d", s);
//    return 0;
//}
//int main()
//{
//	int m;
//	for(m=0;m=10;m++)//执行一次
//
//	return 0;
//}
#include <stdio.h>
//int main() 
//{
//    long num = 1;
//    while (num++ > 0)
//        for (long i = num; i >= 0; i--)
//            printf("i :=\n \t %ld \n", i);
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 1, n, a, b;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        for (a = 0; a <= 100; a++)
//        {
//            for (b = 0; b <= 100; b++)
//            {
//                if (i * 5 + a * 2 + b == 150 && i + a + b == 100)
//                {
//                    printf("%d %d %d\n", i, a, b);
//                }
//            }
//        }
//    }
//    return 0;
//}
//                                                                        阶乘和
//#include <stdio.h>
//int main()
//{
//    int i, n, ret = 1, s = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret *= i;
//        s += ret;
//    }
//    printf("%d", s);
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    int A, B, i, s = 0, n;
//    scanf("%d %d", &A, &B);
//    n = A;
//    for (i = 1; i <= B - n + 1; i++)
//    {
//        printf("%5d", A);
//        s += A;
//        A++;
//        if (i%5==0)
//        {
//            printf("\n");
//        }
//    }
//    printf("\n");
//    printf("Sum = %d", s);
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    int a, b, i, s = 0, count = 0;
//    scanf("%d %d", &a, &b);
//    for (i = a; i <= b; i++)
//    {
//        printf("%5d", a);
//        s += a;
//        a++;
//        count ++ ;
//        if (count % 5 == 0)
//        {
//            printf("\n");
//        }
//    }
//    printf("\nSum = %d\n", s);
//    return 0;
//}
//int main()
//{
//   int n = 3,i,j;
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("[%d#%d]\n", i, j);
//        }
//    }
//}
//int main()
//{
//    int a, n, count = 1, sn = 0, tn = 0;
//    printf("请输入a和n：\n");
//    scanf("%d %d", &a, &n);
//    while (count <= n) {
//        tn=a;
//        sn = sn + tn;
//        a = a * 10 + 2;
//        count++;
//    }
//    printf("结果＝%d\n", sn);
//    return 0;
//}