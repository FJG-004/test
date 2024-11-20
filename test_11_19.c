#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
//int main()
//{
//    double cm, z_inch;
//    scanf("%ld", &cm);
//    z_inch = (cm / 100 / 0.3048) * 12;
//    int inch, foot;
//    inch = (int)z_inch % 12;
//    foot = z_inch / 12;
//
//    printf("%d %d", foot, inch);
//    return 0;
//}

//超过60或负数
//#include <stdio.h>
//#include <stdio.h>
//int main()
//{
//    int ch, g, ch1;
//    scanf("%d %d", &ch, &g);
//    ch1 = ch;
//    if (g >= 0)
//    {
//        ch += (g / 60) * 100;
//        if ((ch1 % 100 + g % 60) >= 60)
//        {
//            ch += 100 + (ch1 % 100 + g % 60) - 60 - ch1 % 100;
//        }
//        else
//        {
//            ch += g % 60;
//        }
//    }
//    if (g < 0)
//    {
//        ch += (g / 60) * 100;
//        if ((ch1 % 100 + g % 60) < 0)
//        {
//            ch += -100 + (ch1 % 100 + g % 60) + 60 - ch1 % 100;
//        }
//        else
//        {
//            ch += g % 60;
//        }
//    }
//    if (ch / 100 != 0)
//        printf("%d", ch);
//    if (ch / 100 == 0)
//        printf("0%d", ch);
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    int time, hour;
//    double money;
//    scanf("%d %d", &time, &hour);
//    if (time < 5)
//    {
//        if (hour <= 40)
//        {
//            money = 30 * hour;
//            printf("%.2lf", money);
//        }
//        else
//        {
//            money = 1200 + 1.5 * 30 * (hour - 40);
//            printf("%.2lf", money);
//        }
//    }
//    else if (time >= 5)
//    {
//        if (hour <= 40)
//        {
//            money = 50 * hour;
//            printf("%.2lf", money);
//        }
//        else
//        {
//            money = 2000 + 1.5 * 50 * (hour - 40);
//            printf("%.2lf", money);
//        }
//    }
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    double x;
//    scanf("%d", &x);
//    if (x <= 15)
//    {
//        printf("%.2lf", 4*x / 3);
//    }
//    else if (x > 15)
//    {
//        printf("%.2lf", 2.5*x - 17.5);
//    }
//    return 0;
//}
#include <stdio.h>
#include <stdio.h>
//int main()
//{
//    double Open, High, Low, Close;
//    scanf("%d %d %d %d", &Open, &High, &Low, &Close);
//    if (Close < Open)
//        printf("BW-Solid ");
//    else if (Close > Open)
//        printf("R-Hollow ");
//    else
//        printf("R-Cross ");
//
//    if (Low < Open && Low < Close)
//        printf("with Lower Shadow");
//    else if (High > Open && High > Close)
//        printf("with Upper Shadow");
//    else if (Low<Open && Low<Close && High>Open && High>Close)
//        printf("with Lower Shadow and Upper Shadow");
//
//    return 0;
//}
//int main()
//{
//
//	printf("左看齐：%-5d%-5d\n", 4, 6);
//	printf("右看齐：%5d%5d", 4, 6);
//	return 0;
//}