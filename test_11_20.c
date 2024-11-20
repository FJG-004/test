#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//
//    double limit;
//    scanf("%lf", &limit);
//    double fs = 1, fz = 1, fm = 1, sum = 1;
//    double n1 = 1, n2 = 3;
//    //分子
//    while (fs > limit)
//    {
//        fz *= n1;
//        fm *= n2;
//        fs = fz / fm;
//        n1++;
//        n2 += 2;
//        sum += fs;
//    }
//
//    printf("%.6lf", sum * 2);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int A, n = 0;
//    scanf("%d", &A);
//    for (int i = A; i < A + 4; i++)
//    {
//        for (int j = A; j < A + 4; j++)
//        {
//            if (j != i)
//                for (int g = A; g < A + 4; g++)
//                {
//                    if (g != i && g != j)
//                    {
//                        printf("%d", i * 100 + j * 10 + g);
//                        n++;
//                        if (n != 6)
//                            printf(" ");
//                    }
//                    else
//                        continue;
//
//                }
//            else
//                continue;
//        }
//        printf("\n");
//        n = 0;
//    }
//    return 0;
//}
#include <stdio.h>
//int main()
//{
//    int N, U, D, times = 1, timex = 0, s = 0;
//    scanf("%d %d %d", &N, &U, &D);
//    while (s < N)
//    {
//        s = times * U - timex * D;
//        times++;
//        timex++;
//    }
//    printf("%d", times + timex);
//    return 0;
//}
////计数法(猴子选大王)
//#include <stdlib.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	int remain = N;
//	int sign = 0;//标记
//	int count = 1;//计数（1，2，3）
//	int* arr;
//	arr = (int*)calloc(N, sizeof(int));
//	if (arr == NULL)
//		exit(1);
//    while(remain>1)
//	{
//		if (arr[sign] == 0 && count % 3 == 0)
//		{
//			arr[sign] = 1;//挑出去的为1
//			count = 1;
//			remain -= 1;
//		}
//
//		else if (arr[sign] == 0)
//		{
//			count++;
//		}
//		sign++;
//		sign = sign % N;//注意猴子的下标就到10，11时就该下一圈了
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] == 0)
//			printf("%d", i + 1);
//	}
//
//	free(arr);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int i = 0, n = 0, sum = 0;
//    scanf("%d", &i);
//    int t = i;
//    int arr[100];
//    while (t != 0)
//    {
//        arr[n] = t % 10;
//        n++;
//        sum++;
//        t /= 10;
//    }
//    if (i >= 0)
//    {
//        for (int j = sum - 1; j >= 0; j--)
//        {
//            if (arr[j] == 0)
//            {
//                printf("ling");
//            }
//            switch (arr[j])
//            {
//            case 1:printf("yi");
//                break;
//            case 2:printf("er");
//                break;
//            case 3:printf("san");
//                break;
//            case 4:printf("si");
//                break;
//            case 5:printf("wu");
//                break;
//            case 6:printf("liu");
//                break;
//            case 7:printf("qi");
//                break;
//            case 8:printf("ba");
//                break;
//            case 9:printf("shi");
//                break;
//            }
//            if (j != 0)
//            {
//                printf(" ");
//            }
//        }
//    }
//    if (i < 0)
//    {
//        printf("fu ");
//        for (int j = sum - 1; j >= 0; j--)
//        {
//            if (arr[j] == 0)
//            {
//                printf("ling");
//            }
//            switch (arr[j])
//            {
//            case 1:printf("yi");
//                break;
//            case 2:printf("er");
//                break;
//            case 3:printf("san");
//                break;
//            case 4:printf("si");
//                break;
//            case 5:printf("wu");
//                break;
//            case 6:printf("liu");
//                break;
//            case 7:printf("qi");
//                break;
//            case 8:printf("ba");
//                break;
//            case 9:printf("shi");
//                break;
//            }
//            if (j != 0)
//            {
//                printf(" ");
//            }
//        }
//    }
//    return 0;
//}