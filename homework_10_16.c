#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>//red yellow blue black white
//#define N 10000
//int main()
//{
//    char str[5][N], arr[5][N];
//    int i = 0, j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%s", str[i]);
//    }
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < 4; j++)
//        {
//            if (strcmp(str[j], str[j + 1]) > 0)
//            {
//                strcpy(arr[j], str[j]);
//                strcpy(str[j], str[j + 1]);
//                strcpy(str[j + 1], arr[j]);
//            }
//        }
//    }
//    printf("After sorted:\n");
//    for (i = 0; i < 5; i++)
//        printf("%s\n", str[i]);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int N, i = 0, j = 0,a = 0,b=0;
//    scanf("%d", &N);
//    int str[6][6];
//    for (i = 0; i < N; i++)
//    {
//        str[i][0] = 1;
//        str[i][i] = 1;
//    }
//    for (i = 2; i < N; i++)
//    {
//        for (j = 1; j < i ; j++)
//        {
//            str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
//        }
//    }
//    i = 0;
//        for (b = N; b > 0; b--)
//        {
//            for (a = 0; a < b - 1; a++)
//            {
//                printf(" ");
//            }
//                
//                    for (j = 0; j <= i; j++)
//                    {
//                        printf("%4d", str[i][j]);
//                    }
//                    i++;
//                    printf("\n");
//
//                
//           
//        }
//
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#define N 10000
//int main()
//{
//    char str1[N];
//    char str2[N];
//    char str3[N] = {'\0'};
//    gets(str1);
//    gets(str2);
//    int n1 = strlen(str1), n2 = strlen(str2), p = 0, t = 0,i=0,j=0;
//    for (i = 0; i < n1; i++)
//    {
//        for (j = 0; j < n2; j++)
//        {
//            if (str1[i] == str2[j])
//            {
//                t = 1;
//            }
//        }
//        if (t == 0)
//        {
//            str3[p] = str1[i];
//            p++;
//        }
//        t = 0;
//    }
//    printf("%s", str3);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char a[10] = {'$','$','$'};
//	char b = '*';
//	a[1] = b;
//	printf("%s", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char a;
//    int N, i = 0, j = 0;
//    scanf("%c%d", &a, &N);
//    char str[9][9] = { '\0' };
//    for (i = 0; i < N; i++)
//    {
//        scanf("%s", str[i]);
//    }
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            if (str[i][j] != ' ')
//            {
//                str[i][j] = a;
//            }
//        }
//    }
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < N; j++)
//        {
//            str[i][j] = str[N - 1 - i][N - 1 - j];
//        }
//    }
//    for (i = 0; i < N; i++)
//        printf("%s\n", str[i]);
//    return 0;
//}
//冒泡排序
#include <stdio.h>
//int main()
//{
//	int a[10] = { 8,9,6,4,5,2,65,35,7,3 },t;
//	for (int j = 0; j < 9; j++)
//	{
//		for (int i = 0; i < 9 - j; i++)
//		{
//			if (a[i] > a[i + 1])
//			{
//				t = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = t;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//选择排序（从小到大）
//int main()
//{
//	int a[10] = { 8,9,6,4,5,2,65,35,7,3 };
//	int n = 0,t,i=0,j=0;
//	for (i = 0; i < 9; i++)
//	{
//		t = i;
//		for (j = 1 + i; j < 10 ; j++)
//		{
//			if (a[j] < a[t])
//			{
//				t = j;//关键理解处
//			}
//		}
//		if (t != i)
//		{
//			n = a[t];
//			a[t] = a[i];
//			a[i] = n;
//		}
//	}
//	for (i = 0; i < 10; i++)
//		{
//			printf("%d ", a[i]);
//		}
//	return 0;
//}
//int main()
//{
//	char a[3] = "abc";//没给'\0'留空间
//	printf("%s", a);
//	return 0;
//}