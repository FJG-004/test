#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//char a = 'B', b = 'O', c = 'Y';
//	int a = 66, b = 79, c = 89;//和上面那个等价
//	putchar(a);
//	putchar(b);
//	putchar(c);
//
//	return 0;
//}
//                                            问题：%c可能把空格符也输入进去，且char只能输出一个字符
//int main()
//{
//	int a, c;
//	char b;
//	scanf("%d%c%d", &a, &b, &c);
//	printf("%d %c %d = %d", a, b, c, a + c);
//
//	return 0;
//}
//                                                             解决方案1：%c前加空格
//int main()
//{
//	int a, c;
//	char b;
//	scanf("%d %c%d", &a, &b, &c);
//	printf("%d %c %d = %d", a, b, c, a + c);
//
//	return 0;
//}
//                                                             解决方案2：用getchar
//int main()
//{
//	int a, c;
//	char b;
//	scanf("%d", &a);
//	getchar();//将空格符读入，避免在后面被当作有效字符读入
//	scanf("%c", &b);
//	scanf("%d", &c);
//
//	printf("%d %c %d = %d", a, b, c, a + c);
//
//	return 0;
//}
int main()
{
	

	return 0;
}
//                                                               注意区别
//int main()
//{
//	int x = 52;
//
//	double y = 123.456;
//
//	printf("%d,%f", x, y);
//	printf("%5d,%1.2f", x, y);
//	printf("%+5d,%-8.2f", x, y);
//
//	return 0;
//}
