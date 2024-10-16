#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n,  k = 0, t, i = 0;
//    scanf("%d", &n);
//    int* arr = (int*)malloc(n * sizeof(int));
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int j = 1; j < n; j++)
//    {
//        if (arr[k] > arr[j])
//            k = j;
//    }
//    //if (k != i)
//    //{
//    //    t = arr[i];
//    //    arr[i] = arr[k];
//    //    arr[k] = t;
//    //}这里i已经是5，不是0了
//    //正确
//    if (k != 0)
//    {
//        t = arr[0];
//        arr[0] = arr[k];
//        arr[k] = t;
//    }
//    int k2 = n - 1;
//    for (int j = 1; j < n - 1 ; j++)
//    {
//        if (arr[k2] < arr[j])
//        {
//            k2 = j;
//        }
//    }
//    if (k2 != n-1)
//    {
//        t = arr[k2];
//        arr[k2] = arr[n-1];
//        arr[n-1] = t;
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    free(arr);
//        return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int n, i, k, s = 0, j;
//    scanf("%d", &n);
//    int* arr = (int*)malloc(n * sizeof(int));
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }//注意i=n+1
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            s += arr[i] * 10 + arr[j];
//        }
//    }
//    for (k = n - 1; k > 0; k--)
//    {
//        for (j = k - 1; j >= 0; j--)
//        {
//            s += arr[k] * 10 + arr[j];
//        }
//    }
//    printf("%d", s);
//    free(arr);
//    return 0;
//}
#include <stdio.h>
#include <math.h>
//int main()
//{
//    int i = 0;
//    float s = 0, Avg = 0, n, a = 0;
//    scanf("%.0f", &n);
//    int* arr = (int*)malloc(n * sizeof(int));
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        s += arr[i];
//    }
//    Avg = s / n;
//    for (i = 0; i < n; i++)
//    {
//        a += (arr[i] - Avg) * (arr[i] - Avg);
//    }
//    float b = sqrt(a / n);
//    printf("%.5f", b);
//    free(arr);
//    return 0;
//}