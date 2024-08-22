#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
//                                                                    字符从两侧向中间缩
//int main()
//{
//	char arr1[] = "the world!!!!!";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1000毫秒==1秒
//		system("cls");//清空屏幕
//	}
//	printf("%s\n", arr2);
//
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i <3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//if (password == "123456");错误写法,strcmp专门比较字符串
//		if (strcmp(password,"123456")==0)//两个字符串比较用strcmp，()内数相等就返回0
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,请重新输入\n");
//		}
//	}
//	if (i == 3 && strcmp(password, "123456") != 0)//                                      这里i凭什么能等于3？？？？？？？？？？？？？？
//	{
//		printf("退出程序\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		printf("%d", i);
//	}
//
//	return 0;
//}