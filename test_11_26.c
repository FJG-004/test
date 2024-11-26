#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//struct date
//{
//	int x;
//	char y;
//}n1;
//int main()
//{
//	scanf("%d", &n1.x);
//	scanf("%c", &n1.y);
//	printf("%p\n", &n1);
//	printf("%p\n", &n1.x);
//	printf("%p\n", &n1.y);
//
//
//	return 0;
//}
//#include<stdio.h>
//struct ps {
//    char i;
//    int arr[50];
//};
//int main()
//{
//    struct ps p1;
//
//  
//    printf("%d\n", sizeof(struct ps)); /* 输出数据之间没有空格分隔 */
//
//    return 0;
//}
//#include <stdio.h>
//typedef struct fs
//{
//    double x, y;
//}FS;
//void ADD(FS a, FS b)
//{
//    if (a.y >= 0 && b.y >= 0)
//        printf("(%.1lf+%.1lfi) + (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y >= 0)
//        printf("(%.1lf%.1lfi) + (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y >= 0 && b.y < 0)
//        printf("(%.1lf+%.1lfi) + (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y < 0)
//        printf("(%.1lf%.1lfi) + (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    FS sum;
//    sum.x = a.x + b.x;
//    sum.y = a.y + b.y;
//    if (sum.x > 0.04 && sum.y > 0)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x <= 0.04 && sum.x >= -0.041) && (sum.y > 0.04 || sum.y < -0.04))
//        printf("%.1lfi\n", sum.y);
//    else if (sum.x < -0.04 && sum.y > 0.04)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x > 0.04 || sum.x < -0.04) && (sum.y <= 0.04 && sum.y >= -0.04))
//        printf("%.1lf\n", sum.x);
//    else if ((sum.y <= 0.04 || sum.y >= -0.04) && (sum.x <= 0.04 && sum.x >= -0.04))
//        printf("0.0\n");
//    else if (sum.y < -0.04)
//        printf("%.1lf%.1lfi\n", sum.x, sum.y);
//}
//void DES(FS a, FS b)
//{
//    if (a.y >= 0 && b.y >= 0)
//        printf("(%.1lf+%.1lfi) - (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y >= 0)
//        printf("(%.1lf%.1lfi) - (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y >= 0 && b.y < 0)
//        printf("(%.1lf+%.1lfi) - (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y < 0)
//        printf("(%.1lf%.1lfi) - (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    FS sum;
//    sum.x = a.x - b.x;
//    sum.y = a.y - b.y;
//    if (sum.x > 0.04 && sum.y > 0)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x <= 0.04 && sum.x >= -0.041) && (sum.y > 0.04 || sum.y < -0.04))
//        printf("%.1lfi\n", sum.y);
//    else if (sum.x < -0.04 && sum.y > 0.04)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x > 0.04 || sum.x < -0.04) && (sum.y <= 0.04 && sum.y >= -0.04))
//        printf("%.1lf\n", sum.x);
//    else if ((sum.y <= 0.04 || sum.y >= -0.04) && (sum.x <= 0.04 && sum.x >= -0.04))
//        printf("0.0\n");
//    else if (sum.y < -0.04)
//        printf("%.1lf%.1lfi\n", sum.x, sum.y);
//}
//void MUL(FS a, FS b)
//{
//    if (a.y >= 0 && b.y >= 0)
//        printf("(%.1lf+%.1lfi) * (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y >= 0)
//        printf("(%.1lf%.1lfi) * (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y >= 0 && b.y < 0)
//        printf("(%.1lf+%.1lfi) * (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y < 0)
//        printf("(%.1lf%.1lfi) * (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    FS sum;
//    sum.x = a.x * b.x - a.y * b.y;
//    sum.y = a.x * b.y + a.y * b.x;
//    if (sum.x > 0.04 && sum.y > 0)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x <= 0.04 && sum.x >= -0.041) && (sum.y > 0.04 || sum.y < -0.04))
//        printf("%.1lfi\n", sum.y);
//    else if (sum.x < -0.04 && sum.y > 0.04)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x > 0.04 || sum.x < -0.04) && (sum.y <= 0.04 && sum.y >= -0.04))
//        printf("%.1lf\n", sum.x);
//    else if ((sum.y <= 0.04 || sum.y >= -0.04) && (sum.x <= 0.04 && sum.x >= -0.04))
//        printf("0.0\n");
//    else if (sum.y < -0.04)
//        printf("%.1lf%.1lfi\n", sum.x, sum.y);
//}
//CHU(FS a, FS b)
//{
//    if (a.y >= 0 && b.y >= 0)
//        printf("(%.1lf+%.1lfi) / (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y >= 0)
//        printf("(%.1lf%.1lfi) / (%.1lf+%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y >= 0 && b.y < 0)
//        printf("(%.1lf+%.1lfi) / (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    else if (a.y < 0 && b.y < 0)
//        printf("(%.1lf%.1lfi) / (%.1lf%.1lfi) = ", a.x, a.y, b.x, b.y);
//    FS sum;
//    double pfh = b.x * b.x + b.y * b.y;
//    sum.x = (a.x * b.x + a.y * b.y) / pfh;
//    sum.y = (a.y * b.x - a.x * b.y) / pfh;
//    if (sum.x > 0.04 && sum.y > 0)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x <= 0.04 && sum.x >= -0.041) && (sum.y > 0.04 || sum.y < -0.04))
//        printf("%.1lfi\n", sum.y);
//    else if (sum.x < -0.04 && sum.y > 0.04)
//        printf("%.1lf+%.1lfi\n", sum.x, sum.y);
//    else if ((sum.x > 0.04 || sum.x < -0.04) && (sum.y <= 0.04 && sum.y >= -0.04))
//        printf("%.1lf\n", sum.x);
//    else if ((sum.y <= 0.04 || sum.y >= -0.04) && (sum.x <= 0.04 && sum.x >= -0.04))
//        printf("0.0\n");
//    else if (sum.y < -0.04)
//        printf("%.1lf%.1lfi\n", sum.x, sum.y);
//}
//int main()
//{
//    FS a, b;
//    scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y);
//    ADD(a, b);
//    DES(a, b);
//    MUL(a, b);
//    CHU(a, b);
//
//    return 0;
//}