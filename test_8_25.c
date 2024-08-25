#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                           一维数组
//int main()
//{
//	//int arr[10];//一维数组的创建
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//一维数组的初始化
//	//int arr[10] = { 1,2,3,4,5,6 };//一维数组不完全初始化
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);//可以检验一个元素占4个字节
//	}                                      //%p-是按地址的格式打印 -十六进制的打印
//
//	return 0;
//}
//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6 };
//	char arr[] = "abcde";
//	int n = sizeof(arr) / sizeof(arr[0]);//这里的计算计入了'\0'
//
//	printf("%d", n);
//	return 0;
//}
//1.一维数组的存放是连续的
//2.随着数组下标的增长，地址是由低到高变化的
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int* pa = arr;//检验数组名是首元素地址
//	int i = 0;
//	for (i = 1; i < 7; i++)
//	{
//		printf("%d ", *pa);
//		pa++;// 是用来存放地址的，在c语言中pa叫是指针变量             //这里不带*??????????????
//		//*说明pa是指针变量
//		//int说明pa执行的对象是int类型的
//
//	}
//	return 0;
//}
//                                                             二维数组
int main()
{
	//二维数组的创建
	//int arr[3][4];
	//char arr[3][5];
	//二维数组的初始化
	int arr[3][3]={1,2,3,4,5,6,7}


	return 0;
}