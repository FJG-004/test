#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include<stdio.h>
//struct ps {
//    double i;
//    char arr[24];
//};
//int main()
//{
//    struct ps s[3], * p1, * p2;
//
//    p1 = s;
//    p2 = s + 2;
//    printf("%d,%d\n", p2 - p1, sizeof(struct ps)); /* 输出数据之间没有空格分隔 */
//
//    return 0;
//}
//#include <stdio.h>
//#define N 10
//typedef struct people
//{
//    char name[10];
//    double jb, f, zh, gz;
//}PEOPLE;
//int main()
//{
//    PEOPLE arr[N];
//    int n;
//    scanf("%d",&n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s %lf %lf %lf", arr[i].name, &arr[i].jb, &arr[i].f, &arr[i].zh);
//        arr[i].gz = 0;
//        arr[i].gz = arr[i].jb + arr[i].f - arr[i].zh;
//    }
//    for (int j = 0; j < n; j++)
//    {
//        printf("%s %.2lf", arr[j].name, arr[j].gz);
//    }
//    return 0;
//}
//#include <stdio.h>
//#define N 10000
//typedef struct student
//{
//    char num[100];
//    char name[100];
//    int score;
//}STRUCT;
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    STRUCT arr[N];
//    double aver = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s %s %d", arr[i].num, arr[i].name, &arr[i].score);
//        aver += arr[i].score;
//    }
//    aver /= n;
//    printf("%.2lf\n", aver);
//    for (int j = 0; j < n; j++)
//    {
//        if (arr[j].score < aver)
//            printf("%s %s\n", arr[j].name,arr[j].num);
//    }
//
//    return 0;
//}
//#define N 10000
//typedef struct student
//{
//    char num[100];
//    char name[100];
//    int score[3], sum;
//}STRUCT;
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    STRUCT arr[N];
//    for (int i = 0; i < n; i++)
//    {
//        arr[i].sum = 0;
//        scanf("%s %s", arr[i].num, arr[i].name);
//        for (int j = 0; j < 3; j++)
//        {
//            scanf(" %d", &arr[i].score[j]);
//            arr[i].sum += arr[i].score[j];
//        }
//    }
//    int max = arr[0].sum, k = 0;
//    for (int p = 1; p < n; p++)
//    {
//        if (max < arr[p].sum)
//        {
//            int t = max;
//            max = arr[p].sum;
//            arr[p].sum = t;
//            k = p;
//        }
//    }
//    printf("%s %s %d", arr[k].name, arr[k].num, max);
//
//    return 0;
//}