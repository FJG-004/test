#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    float  score;
//    int i = 0;
//    char rank;
//    while (i <= 2)
//    {
//        scanf("%f", &score);
//        if (score >= 80 && score <= 100)
//            if (score >= 90)
//                rank = 'A';
//            else
//                rank = 'B';
//        else if (score >= 70)
//                rank = 'C';
//        else if (score >= 60)
//                rank = 'D';
//        else
//                rank = 'E';
//        printf("%.2f分数的等级为%c\n", score, rank);
//        i++;
//    }
//    return 0;
//}

//int main()
//{
//	double a = 15;
//	printf("%.2lf", a);
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a - b < b * 0.1)
//        printf("OK\n");
//    else if (a - b < b * 0.5)
//        printf("Exceed %d%%. Ticket 200", 100 * (a - b) / b);
//    else if (a - b >= b * 0.5)
//        printf("Exceed %d%%. License Revoked\n", (a - b) * 100 / b);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int speed, limit;
//    scanf("%d %d", &speed, &limit);
//    int p = (speed - limit) * 100 / limit;
//    if (p < 10)
//        printf("OK\n");
//    else if (p >= 10 && p < 50)
//        printf("Exceed %d%%. Ticket 200\n", p);
//    else
//        printf("Exceed %d%%. License Revoked\n", p);
//    return 0;
//}
//                                                                        三角形判断
//#include <stdio.h>
//#include <math.h>
//double distance(double x1, double y1, double x2, double y2)
//{
//    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//int main()
//{
//    double x1, y1, x2, y2, x3, y3;
//    scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
//    double a = distance(x1, y1, x2, y2);
//    double b = distance(x1, y1, x3, y3);
//    double c = distance(x2, y2, x3, y3);
//
//    if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        printf("Impossible");
//    }
//    else
//    {
//        double L = a + b + c;
//        double A =0.25 * sqrt((a + b + c) * (a + b - c) * (a + c - b) * (b + c - a));
//        printf("L = %.2lf, A = %.2lf", L, A);
//    }
//    return 0;
//}
//                                                                      计算天数
//#include <stdio.h>
//int main()
//{
//    int year, month, day, p, s;
//    scanf("%d%d%d", &year, &month, &day);
//    if (year % 4 == 0)
//    {
//        if (year % 100 != 0 || year % 400 == 0)
//            p = 1;
//        else
//            p = 0;
//    }
//    else
//    {
//        p = 0;
//    }
//    if (p == 1)
//    {
//        switch (month)
//        {
//        case 1:s = 0; break;
//        case 2:s = 31; break;
//        case 3:s = 60; break;
//        case 4:s = 90; break;
//        case 5:s = 121; break;
//        case 6:s = 152; break;
//        case 7:s = 182; break;
//        case 8:s = 213; break;
//        case 9:s = 244; break;
//        case 10:s = 274; break;
//        case 11:s = 305; break;
//        case 12:s = 335; break;
//        }
//    }
//    if (p == 0)
//    {
//        switch (month)
//        {
//        case 1:s = 0; break;
//        case 2:s = 31; break;
//        case 3:s = 59; break;
//        case 4:s = 89; break;
//        case 5:s = 120; break;
//        case 6:s = 151; break;
//        case 7:s = 181; break;
//        case 8:s = 212; break;
//        case 9:s = 243; break;
//        case 10:s = 273; break;
//        case 11:s = 304; break;
//        case 12:s = 334; break;
//        }
//    }
//    s += day;
//    printf("%d", s);
//    return 0;
//}