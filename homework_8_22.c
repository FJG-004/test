#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                           判断input(1)为多少
//int input(int a)
//{
//
//	int b;
//	switch (a)
//	{
//	case 1:                                                //关键点为没有break
//		b = 30;
//	case 2:
//		b = 20;
//	case 3:
//		b = 10;
//	default:
//		b = 0;
//	}
//				return b;
//}
//int main()
//{
//	printf("%d", input(1));
//	return 0;
//}
//int main()
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2)
//	{
//	case 1:
//		switch (y)
//		{
//			case 1:
//				printf("hehe\n");
//			case 0:
//				printf("haha\n");
//			default:
//				printf("hello ");
//		}
//	case 2:
//		printf("third\n");
//	}
//
//
//	return 0;
//}
                                                             //三个整数从大到小输出
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    if(a < b)
//    {
//        int tmp = a;
//        a = b;//                                注意没有int？？？？？？？？？？？？？？为啥
//        b = tmp;
//    }
//    if(a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}
//                                                             找到1到100中3的倍数
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if(i % 3 == 0)
//        {
//            printf("%d ", i);
//        }
//    };
//    return 0;
//}
//                                                             找到两数的最大公约数
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int max = 0;
//    if (m < n)
//    {
//        max = m;
//    }
//    else
//    {
//        max = n;
//    }
//    while (1)
//    {
//        if (m % max == 0 && n % max == 0)
//            break;
//        max--;
//    }
//    printf("找到的最大公约数是%d", max);
//
//    return 0;
//}
//辗转相除法
int main()
{
    int m = 0;
    int n = 0;
    scanf("%d%d", &m, &n);
    if(m<n)
    {
        int tmp = m;
        m = n;
        n = tmp;
    }
    while (1)
    {
        if (m % n == 0)
        {
            break;
        }
        else
        {
            int tmp = m;
            m = n;
            n = m % n;
        }
    }
    printf("找到的最大公约数是%d", n);
    return 0;
}