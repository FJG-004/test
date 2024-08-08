#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                            for
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//初始化；判断部分；调整部分
//	{
//		printf("%d\n", i);
//	}
//
//
//	return 0;
//}
//                                                                                break,continue在for中出现
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
			//break;
			//continue;

//		printf("%d\n", i);
//	}
// 
//	return 0;
//} 


                                                                 //1.不可在for循环体内修改循环变量，防止for循环失去控制。
                                                              //2.建议fo语句的循环控制变量的取值采用“前闭后开区间”写法。


									                          //  循环体内改变循环变量的例子
//1.
//int main()
//{
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d", i);
//		 i = 5;
//	}
//
//	return 0;
//}
//2.
//int main()
//{
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d", i);
//		int j = 0;
//		for(j=0;j<10;i++)        //注意这里是i
//		{
//			printf("hehe\n", j);
//		}
//	}
//
//	return 0;
//}

                                                                         //for 中()内的省略
//变种一
//int main()
//{
//	for(;;)//可以随意省略，判断部分的省略，判断部分恒为真
//	{
//		printf("hehe");
//	}
//
//
//	return 0;
//}
 //变种二
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	for(x=0,y=0;x<2 & y<3;x++,y++)
//	{
//		printf("%d %d\n", x, y);
//	}
//
//	return 0;
//}
 
                                                                            //()的省略问题
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		printf("%d", i);
//		for(;j<3;j++)//这里省略j=0后,j不能在第二次循环中初始化为0，故无法继续打印
//		{
//			printf("hehe\n");
//		}
//	}
//
//
//	return 0;
//}
//int main()
//{
//    int x = 0;
//    int y = 0;
//
//    for(x=0,y=0;x=0;x++,y++)//一个=为赋值，判断部分为假，打印次数为0
//    {
//        printf("%d %d", x, y);
//    }
//
//    return 0;
//}
//                                                                                 do while
//int main()
//{
//    int i = 0;
//    do {
//        if (i == 5)
//            continue;
//
//        printf("%d", i);
//        i++;
//    } while (i <= 10);
//
//
//    return 0;
//}
