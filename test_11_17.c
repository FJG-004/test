#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() {
//    int *arr;
//    // 使用calloc分配能存放5个整数的内存空间
//    arr = (int *)calloc(5, sizeof(int));
//    if (arr == NULL) {
//        printf("内存分配失败！\n");
//        return 1;
//    }
//    // 可以在这里使用分配好并已初始化为0的内存空间，比如输出其初始值
//    for (int i = 0; i < 5; i++) {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }
//
//    free(arr);
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>

//void order(int* arr, int* N)
//{
//    for (int i = 0; i < *N - 1; i++)
//    {
//        for (int j = 0; j < *N - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//            }
//        }
//    }
//}
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int* arr;
//    arr = (int*)calloc(N, sizeof(int));
//    if (arr == NULL)
//    {
//        exit(1);
//    }
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    order(arr, &N);
//
//    for (int j = 0; j < N; j++)
//    {
//        printf("%d", arr[j]);
//    }
//
//    free(arr);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int* arr;
//    arr = (int *)calloc(N, sizeof(int));
//    if (arr == NULL)
//    {
//        exit(1);
//    }
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < N - 1; i++)
//    {
//        for (int j = 0; j < N - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//            }
//        }
//    }
//    for (int i = 0; i < N; i++)
//    {
//        if (i != N - 1)
//            printf("%d ", arr[i]);
//        else
//            printf("%d", arr[i]);
//    }
//    return 0;
//}