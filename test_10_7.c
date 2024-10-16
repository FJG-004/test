#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0, n = 0, sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("sum = %d", sum);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, i, a, b, c;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d%d%d", &a, &b, &c);
//        if (a == 1)
//        {
//            if (b < 130)
//            {
//                printf("duo chi yu! ");
//            }
//            else if (b > 130)
//            {
//                printf("ni li hai! ");
//            }
//            else
//            {
//                printf("wan mei! ");
//            }
//            if (c < 27)
//            {
//                printf("duo chi rou!\n");
//            }
//            else if (c > 27)
//            {
//                printf("shao chi rou!\n");
//            }
//            else
//            {
//                printf("wan mei!\n");
//            }
//        }
//        else
//        {
//            if (b < 129)
//            {
//                printf("duo chi yu! ");
//            }
//            else if (b > 129)
//            {
//                printf("ni li hai! ");
//            }
//            else
//            {
//                printf("wan mei! ");
//            }
//            if (c < 25)
//            {
//                printf("duo chi rou!\n");
//            }
//            else if (c > 25)
//            {
//                printf("shao chi rou!\n");
//            }
//            else
//            {
//                printf("wan mei!\n");
//            }
//        }
//    }
//
//    return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int a, i, n;
//    char b;
//    scanf("%d %c", &a, &b);
//    int k = round(a / 2);
//    for (n = 0; n < k; n++)
//    {
//        for (i = 0; i < a; i++)
//        {
//            printf("%c", b);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int a, p, i,sum=0;
//    scanf("%d%d", &a, &p);
//    int g, _g, s, b;
//    if (a > p)
//    {
//        printf("Invalid Value.");
//    }
//    for (i = a; i <= p; i++)
//    {
//        g = i % 10;
//        _g = i / 10;
//        s = _g % 10;
//        b = _g / 10;
//        sum = g * g * g + s * s * s + b * b * b;
//        if (sum == i)
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//long long gcd(long long a, long long b)
//{
//    if (b == 0) return a;
//    return gcd(b, a % b);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    long long a = 0, b = 1;
//    for (int i = 0; i < n; i++)
//    {
//        long long _a, _b;
//        char s;
//        scanf("%lld%c%lld", &_a, &s, &_b);
//        a = a * _b + _a * b;
//        b *= _b;
//    }
//    long long c = gcd(a, b);
//    a /= c;
//    b /= c;
//    long long i = a / b;
//    a %= b;
//    if (i == 0)
//    {
//        if (a != 0)
//        {
//            printf("%lld/%lld\n", a, b);
//        }
//    }
//    else
//    {
//        if (a != 0)
//            printf("%lld %lld/%lld\n", i, a, b);
//        else
//            printf("%lld\n", i);
//    }
//    return 0;
//}//a（分子总和）b（分母总和）i（整数部分）
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n;
//    char symbol;
//    scanf("%d %c", &n, &symbol);
//    int lines = 1;
//    while ((2 * lines * lines - 1) <= n) {
//        lines++;
//    }
//    lines--;
//    for (int i = lines; i > 0; i--) {
//        for (int j = 0; j < lines - i; j++) {
//            printf("");
//        }
//        for (int k = 0; k < 2 * i - 1; k++) {
//            printf("%c", symbol);
//        }
//        printf("\n");
//    }
//    for (int i = lines; i > 0; i--) {
//        for (int j = 0; j < lines - i; j++) {
//            printf("");
//        }
//        for (int k = 0; k < 2 * i - 1; k++) {
//            printf("%c", symbol);
//        }
//        printf("\n");
//    }
//    printf("%d\n", n - (2 * lines * lines - 1));
//    return 0;
//}