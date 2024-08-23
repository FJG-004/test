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
//                                                                  辗转相除法
                                                                        //1.
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    if(m<n)
//    {
//        int tmp = m;
//        m = n;
//        n = tmp;
//    }
//    while (1)
//    {
//        if (m % n == 0)
//        {
//            break;
//        }
//        else
//        {
//            int t = m;
//            m = n;
//            n = t % n;
//        }
//    }
//    printf("找到的最大公约数是%d", n);
//    return 0;
//}
                                                                          //2.
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &m, &n);
//    int t = 0;
//    while (t = m % n)//不用考虑m和n的大小,例如18%24==18然后又变成了m=24,n=18
//    {
//        m = n;
//        n = t;
//    }
//    printf("最大公约数是%d", n);
//
//    return 0;
//}
//打印100-200间的素数
//                                                                 辗转相除法
//                                                                      1.
//int main()
//{
//    int i = 0;
//    for(i=100;i<=200;i++)
//    {
//        int a = 0;
//        for(a=2;a<i;a++)//一直a++直到a==i时跳出循环，因为你想想如果a==i-1,那不还是在循环里吗
//        {
//            if(i % a == 0)
//        {
//                break;//跳出小for
//        }
//        }
//        if(i==a)//上方解释为什么i==a
//        {
//            printf("%d ", i);
//        }
//    }
//
//    return 0;
//}
//         
#include <math.h>                                                     //  2.
//int main()
//{
//    
//    int i = 0;
//    for (i = 101; i <= 200; i+=2)//加2是因为偶数不可能为素数，+2后优化了代码
//    {
//        int a = 0;
//        int flag = 1;
//        for (a = 2; a < sqrt(i); a++)//sqrt开平方的函数，头文件math.h
//            //原本测试2到i-1的数，其实2到开平方的数也行
//            //例如16=4*4=2*8，肯定有一个小于等于开平方的数的，继续优化
//        {
//            if (i % a == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if (flag == 1)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
