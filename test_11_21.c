#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 5;
//	printf("%05d", i);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int y, f, n, num = 0;
//    scanf("%d", &n);
//    for (int i = 0; i < 100; i++)
//    {
//        y = i;
//        for (int j = 0; j < 100; j++)
//        {
//            f = j;
//            if (98 * f - 199 * y == n)
//            {
//                num = 1;
//                break;
//            }
//        }
//        if (num == 1)
//        {
//            break;
//        }
//    }
//    if (num == 1)
//        printf("%d.%d", y, f);
//    else
//        printf("No Solution");
//    return 0;
//}
//                                                                龟兔赛跑
//#include <stdio.h>
//int main()
//{
//    int T, time = 0, g_s = 0, t_s = 0;
//    int sleep = 1;
//    scanf("%d", &T);
//    while (time < T)
//    {
//        if ((T - time) >= 10 && sleep == 1)//醒着
//        {
//            t_s += 10 * 9;
//            g_s += 3 * 10;
//            time += 10;
//            if (t_s > g_s)
//                sleep = 0;
//        }
//        else if ((T - time) >= 10 && sleep == 0)//睡着
//        {
//            if (time + 30 <= T)
//            {
//                g_s += 3 * 30;
//                time += 30;
//                sleep = 1;
//            }
//            else if (time + 30 > T)
//            {
//                g_s += 3 * (T - time);
//                time = T;
//            }
//        }
//        else if ((T - time) < 10)
//        {
//            if (sleep == 1)//醒着
//            {
//                t_s += 9 * (T - time);
//                g_s += 3 * (T - time);
//                time = T;
//            }
//            else if (sleep == 0)//睡着
//            {
//                g_s += 3 * (T - time);
//                time = T;
//            }
//
//        }
//
//    }
//    if (t_s > g_s)
//    {
//        printf("^_^ %d", t_s);
//    }
//    else if (t_s < g_s)
//    {
//        printf("@_@ %d", g_s);
//    }
//    else
//        printf("-_- %d", t_s);
//    return 0;
//}