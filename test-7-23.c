#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//printf
#include<string.h>//strlen
//                                                                                           打印
//int main()
//{
//	printf("2233\n");
//
//		return 0;
//
//}
//                                                                                          加减
//int main()
//{
//	int age = 10;//变量类型  变量名字 = 赋值
//	double weight = 75.3;
//
//	age = age + 25;
//	weight = weight + 20;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//                                                                                        蜂鸣器响
//int main()
//{
//	printf("\a");
//	printf("\a");
//	printf("\a");
//	printf("\a");
//	printf("\a");
//
//}
//                                                                                    计算各个类型长度
//int main()
//{
// sizeof是操作符
//siezof计算类型或变量的空间大小，单位是字节byte
//	printf("%d\n", sizeof(char));//char用%c(字符型格式符）
//	printf("%d\n", sizeof(short));//整形用%d
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));//单精度浮动点用%f
//	printf("%d\n", sizeof(double));//双精度浮动点用%lf
//
//	return 0;
//}
//                                                                      全局变量和局部变量名字冲突时，局部变量优先
//int a = 10;//全局变量{}外部定义的
// 
//int main()
//{
//	int a = 100;//局部变量{}内部定义的
// 
// 
//	printf("%d", a);
//	return 0;
//}
//定义域和生命周期
//局部变量的定义域是变量所在局部范围
//全局变量的定义域是整个工程
//int a = 2024;

//int main()
//{
//	int b = 4374;
//	{
//		printf("1.%d\n", b);
//
//
//
//	}
//
//	printf("2.%d\n", a);
//
//
//	return 0;
//}
//变量的生命周期指变量从创建到销毁间的时间段
//                                                                                            常量
//int main()
//{
//                                                                                          1.字面变量
// 3.14
// 10
// "hjhjk"
// 
//                                                                                       2.const修饰的常变量
	//int a = 10;
	//a = 20;

	//printf("%d\n", a);//答案20
	// 
	// 
	//const int a = 10;//int在const成为常变量（具有常属性）
	//a = 20;
	// 
	// 
	//printf("%d\n", a);//报错
//	int arr[10] = { 0 };
//	
//	const int n = 10;//const还能这样？？？本来应该是不行的,[]内应该为常量
//	int arr2[n] = { 0 };
//	
//	printf("%d\n", arr);
//	printf("%d", arr2);
//	
//                                                                                       3.#define定义的标识符常量
//
//#define MAX 1000;//#define定义的标识符常量（不能更改的）
//
//	int a = MAX;
//
//	MAX = 2000;//错误的
//
//	printf("%d", a);
//
//	return 0;
//}
//                                                                                               4.枚举常量
                                                                                            //可以一一列举的常量
//enum Sex {
//
//	male ,//赋初值能改
//	female,//  ,不要忘
//	secret
//
//};
//
//int main()
//{
//	enum Sex s = female;
//
//	printf("%d\n", male);//不能在这里改，如不能在这里male = 3
//	printf("%d\n", s);
//	printf("%d\n", secret);
//
//	return 0;
//}
//                                                                                                 调试
//int main()
//{
//	char arr[] = "hello";//调试要注意光标位置
//	字符串结尾都隐藏了一个\0
//	\0是字符串的结束标志
//	\0是转义字符
//
//	return 0;
//}
//                                                                                         字符串储存在字符数组中
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };//可手动加\0   //数组如果初始化，可以不指定大小，他会根据初始化内容确定大小
//
//	printf("%s\n", arr1);                                                                 //%s（字符串型格式符）
//	printf("%s\n", arr2);
//	
// char arr[5] = { 'a','b','c' };//好像[]写上数值就没有烫烫烫了
//
//	printf("%s\n", arr);
//
//
//	                                                                                         计算字符串长度
//	int length = strlen("abc");
//
//	printf("%d", length);//\0不计入字符串长度
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
//int main()
//{
	                                                                                        // %c为字符型识字符
	 
	 
	//printf("\\test");//\test中的\t不能识别
	//printf("%c\n", '\x30');//0-48  十六进制    //%c  ASCII表
	//printf("%c\n",'\130');//X-88  八进制
	//printf("%c\n",'\'');//'''不能打印出‘，前两个单引号会认为是一对单引号
	//printf("'");
	//printf("%d", strlen("c:\test\328\test.c"));//14
	//return 0;
//}
//                                                                                                选择语句
// int main()
//{
//	int input = 0;
//	printf("你要好好学习吗？（1/0）>:");
//	scanf("%d", &input);
//	if (input == 1)//这里不要加；
//	{ 
//		printf("好offer\n"); 
//	}
//	else//实际效果是只要不输入1，输入别的都是“卖红薯”
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}
//                                                                                                循环语句
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码");
//		//printf("写代码:%d",line);//写代码前有序号
//			line++;
//	}
//	if(line == 30000)
//	{
//		printf("offer");
//	}
//
//	return 0;
//}
//                                                                                                加减法1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d", c);
//
//	return 0;
//}
//                                                                       加减法2（函数法）虽然前期繁琐，但后期直接用ADD就行
//int ADD(int x, int y)                                                    // 把要计算的东西交给函数，函数算出来再放回去
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = ADD(a, b);
//	printf("%d",c);
//
//	return 0;
//}
//                                                                                            数组（while)
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组是用下标来访问的
//	int i = 0;
//
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//
//		i++;
//	}
//	
//char ar[5] = { 'a','b','c' };//不完全初始化，剩余默认为0
// return 0;
//}
