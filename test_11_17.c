#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main() {
//    int *arr;
//    // ʹ��calloc�����ܴ��5���������ڴ�ռ�
//    arr = (int *)calloc(5, sizeof(int));
//    if (arr == NULL) {
//        printf("�ڴ����ʧ�ܣ�\n");
//        return 1;
//    }
//    // ����������ʹ�÷���ò��ѳ�ʼ��Ϊ0���ڴ�ռ䣬����������ʼֵ
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