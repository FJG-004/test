#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                        while
//int main()
//{
//	int i = 1;
//
//	//while (i<=10)
//	//{
//	//	if (5 == i)
//	//		break;//在while中，break用于永久的终止循环
//	//	printf("%d\n", i);
//	//	i++;
//	//}
//
//	while (i <= 10)   //判断部分
//		{
//		if (5 == i)
//			continue;//在whi1e循环中，continue的作用是跳过本次循环continue后边的代码
//		             //直接去判断部分，看是否进行下一次循环
//			printf("%d\n", i);
//			i++;
//		}
//	return 0;
//}

// EOF=edd of file文件结束标志

//int main()
//{
//	int ch = getchar();//获取一个字符
//		printf("%c",ch);
//		putchar(ch);//输出一个字符
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;                                         //getchar连\n（回车）也会读取，所以输出时自动换行
//	while ((ch = getchar()) != EOF)                      //！=是不等于的意思，！=EOF就是没有遇到错误，没有遇到结束
//	{                                                     //好像就是能多打几行的样子，是while嘛
//		putchar(ch);
//	}
//	                                           //   getchar      缓冲区       键盘
//	return 0;
//}
 
 
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//数组的数组名本身就是地址，故不用&
//	printf("请确认密码(Y/N):>");
//
//	//清理缓存区
//	//getchar();//处理'\n'
//
//	//清理缓冲区多个字符
//	int a = 0;
//	while ((a = getchar()) != '\n')
//	{
//		;
//	}
//	
//	int ch = getchar();
//	if (ch == 'Y')//单个字符用单引号
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认错误");
//	}
//
//	return 0;
//}
//                                                                                           个人测试while
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		printf("hehe\n");
//		i++;
//	}
//
//	printf("haha");
//
//	return 0;
//}

 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//			putchar(ch);
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;                                         //初始化
//
//	while (i <= 10)                                    //判断部分
//	{
//		printf("%d\n", i);
//		i++;                                           //调整部分
//	}
//
//
//	return 0;
//}
