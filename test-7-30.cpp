#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//                                                                                     最大值
//int Max(int x,int y)
//{
//	if(x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Max(a, b);
//	
//	printf("%d\n", c);
//
//		return 0;
//}
//int main()
//{
//	int a = 7;
//	int b = 9;
//
//	int c = a > b ? a : b;
//
//	printf("%d",c);
//	return 0;
//}
//                                                                                        飞机
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}
//                                                                                一个整数除以5是否有余
//int main()
//{
//	int a = 65;
//	if(a%5==0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}
// 
//                                                                            语句（，隔开的就是语句）
// 
//                                                                                   选择语句
//int main()
//{
//	//语法正确，逻辑错误示例
//	/*int age = 70;
//	if (age < 18)
//		printf("少年\n");
//	else if(18<=age<35)                              //18<=age后为真，变成1，然后就成了1<35成立，青年就被打印了
//		printf("青年\n");*/
//
//	int age =19;
//	if (age < 18)
//		printf("少年");
//	else if (age >= 18 && age < 35)
//		printf("青年");
//	else if (age >= 35 && age < 65)
//		printf("中年");
//	else if (age >= 65 && age < 100)
//		printf("老年");
//	//else (age >= 100)//这样错误
//	else
//	printf("老毕登");
//	return 0;
//}
//                                                                                   悬空else
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a == 1)//这里不成立后面直接废了
//		if (b == 5)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else与最近的if匹配
//
//
//	return 0;
//}
//书写方式
//                                                             1 
//if (condition)                                
//{
//	return x;
//}
//return y;
//                                                      2(两个的意思一样）
//if (condition)                                
//{
//	return x;
//}
//else
//{
//	return y;
//}
//int main()
//{
//	int num = 3;
//
//	if (5 == num)//老司机写法
//		printf("hehe\n");
//
//
//
//	return 0;
//}
//                                                                              判断奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
//
//	return 0;
//}
//                                                                          打印1到100的奇数
//int main()
//{
	//1.
	/*int i = 0;
	while (i < 100)
	{
		i++;
		if (i % 2 == 1)
			printf("%d\n", i);
	}*/

	//2.
	/*int i = 1;
	while(i<100)
	{
		 
		printf("%d", i);
		i += 2;

	}*/

	//return 0;
//}
//                                                                                    switch
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1://case+整形常量表达式
//		printf("星期一\n");
//		break;//break用于终止
//	case 2:
//		printf("星期二\n");
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//	case 6:
//		printf("星期六\n");
//	case 7:
//		printf("星期七\n");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;//加上是好习惯
//	default:
//		printf("输入错误");
//		break;
//	}
//
//	return 0;
//}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;//m=3
	case 2:
		n++;//n=2
	case 3:
		switch (n)
		{
		case 1:	n++;//不走
		case 2:	m++, n++;//m=4,n=3
			break;
		}
	case 4:
		m++;//m=5
		break;
	}
	printf("m=%d,n=%d", m, n);

	return 0;
}