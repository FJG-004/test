#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int money, year;
//	double rate;
//	scanf("%d %d %lf", &money, &year, &rate);
//	printf("%d#%d#%.3f", money, year, rate);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch(a)
//	{
//	case 1:printf("haha");
//		break;
//	case 2:printf("hehe");
//		break;
//	}
//
//	return 0;
//}
//int main(void)
//{
//    int  a = 2, b = -1, c = 2;
//
//    if (a < b)
//        if (b < 0)
//            c = 0;
//        else  c++;
//    printf("%d\n", c);
//
//    return 0;
//}
//int main()
//{
//	int a = 5, b = 4, c = 6, d;
//	printf("%d", d = a > b ? a > c ? a : c : b);//实际为a > b ?（ a > c ? a : c ）: b
//
//	return 0;
//}
//int main()
//{
//	char x = '$';
//	printf("%c %d", x, x);
//	
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//    int c1 = 0, c2 = 0;
//    char ch;
//
//    while ((ch = getchar()) != '#') {
//        switch (ch) {
//        case 'a':
//        case 'h': c1++;
//        default: c2++;//注意break!!!!!!!!
//        }
//    }
//    printf("c1=%d,c2=%d\n", c1, c2);
//
//    return 0;
//}
//int main()
//{
//    int a, b, c;
//    a = 20; b = 30; c = 10;
//
//    if (a < b) a = b;//a=30
//    if (a >= b) b = c; c = a;//b=10,c=30
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}
//int main()
//{
//    int a = 5, b = 4, c = 3, d = 2;
//
//    if (a > b > c) 
//        printf("%d\n", d);
//    else if ((c - 1 >= d) == 1) 
//        printf("%d\n", d + 1);
//    else 
//        printf("%d\n", d + 2);
//
//    return 0;
//}
//int main()
//{
//	int a = 3, b = 4, c = 5, t = 99;
//	
//	if (b < a && a < c)
//		t = a; a = c; c = t;//注意{}（真恶心）这里t=a不运行，后面的运行
//	if (a < c && b < c) 
//		t = b, b = a, a = t;
//	
//	printf("%d%d%d\n", a, b, c);
//
//	return 0;
//}
//int main()
//{
//    int a, b, c;
//    int s, w, t;
//    s = w = t = 0;
//    a = -1; b = 3; c = 3;
//    if (c > 0) s = a + b;
//    if (a <= 0)
//    {
//        if (b > 0)
//            if (c <= 0) w = a - b;
//    }
//    else if (c > 0) w = a - b;
//    else t = c;
//    printf("%d %d %d", s, w, t);
//        return 0;
//}
//int main()
//{
//    int a = 2, b = 7, c = 5;
//    switch (a > 0)//这里相当于传进去1(真)
//    {
//    case 1: switch (b < 0)
//    {
//    case 1: printf("@"); break;
//    case 2: printf("!"); break;
//    }
//    case 0: switch (c == 5)
//    {
//    case 0: printf("*"); break;
//    case 1: printf("#"); break;
//    default: printf("#"); break;
//    }
//    default: printf("&");
//    }
//    printf("\n");
//
//    return 0;
//}
//int main()
//{
//	int a = -1, b = 3, c = 4, s = 0, w = 0, t = 0;
//	if (a > 0 && b++)
//		s = a + b;
//	if (b > 0 || c++)
//		w = b + c;
//	if (c > 0 && a++)
//		t = c + a;
//	printf("%d%d%d", s, w, t);
//	return 0;
//}
//int main()
//{
//	int a = 1,b=2,c=4,d=3;
//	int x;
//	if (a < b)
//		if (c < d) x = 1;
//		else
//			if (a < c)
//				if (b < d) x = 2;
//				else x = 3;
//			else x = 4;
//	else x = 5;
//	printf("%d", x);
//	return 0;
//}
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int c = b * 1.1;
//    if (a < b * 1.1)
//        printf("OK");
//    if (a >= c && a < b * 1.5)
//        printf("Exceed %d%% Ticket 200", (a - b)*100 / b);
//    if (a >= b * 1.5)
//        printf("Exceed %d%% License Revoked", (a - b)*100 / b);
//
//        return 0;
//}
//int main()
//{
//    int a = 110;
//    int b = 100;
//    int c = 100 * 1.1;
//    if (a >= b * 1.1)
//        printf("666");
//    if (a < b * 1.1)
//        printf("OK");
//
//    return 0;
//}
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a - b < b * 0.1)
//    {
//        printf("OK");
//    }
//    if (a - b >= b * 0.1 && a - b < b * 0.5)
//    {
//        printf("Exceed %d%%. Ticket 200", (a - b) * 100 / b);
//    }
//    if (a-b >= b * 0.5)
//    {
//        printf("Exceed %d%%. License Revoked", (a - b) * 100 / b);
//    }
//    return 0;
//}