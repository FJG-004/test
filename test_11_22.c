#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//void Y_puts(int arr[], int i)
//{
//    i--;
//    if (arr[i] == 1)
//        printf("bY");
//    else if (arr[i] == 2)
//        printf("cY");
//    else if (arr[i] == 3)
//        printf("dY");
//    else if (arr[i] == 4)
//        printf("eY");
//    else if (arr[i] == 5)
//        printf("fY");
//    else if (arr[i] == 6)
//        printf("gY");
//    else if (arr[i] == 7)
//        printf("hY");
//    else if (arr[i] == 8)
//        printf("iY");
//    else if (arr[i] == 9)
//        printf("jY");
//}
//void W_puts(int arr[], int i)
//{
//    int j = i - 1, num = 0;
//    while (arr[j] == 0)
//    {
//        j--;
//        if (j == 3)
//            break;
//    }
//    while (j != 3)
//    {
//        if (arr[j] == 1)
//            printf("b");
//        else if (arr[j] == 2)
//            printf("c");
//        else if (arr[j] == 3)
//            printf("d");
//        else if (arr[j] == 4)
//            printf("e");
//        else if (arr[j] == 5)
//            printf("f");
//        else if (arr[j] == 6)
//            printf("g");
//        else if (arr[j] == 7)
//            printf("h");
//        else if (arr[j] == 8)
//            printf("i");
//        else if (arr[j] == 9)
//            printf("j");
//        if (arr[j] != 0)
//        {
//            if (j == 7)
//                printf("Q");
//            else if (j == 6)
//                printf("B");
//            else if (j == 5)
//                printf("S");
//            else if (j == 4)
//                printf("W");
//            j--;
//        }
//        else if (arr[j] == 0)
//        {
//            while (arr[j] == 0)
//            {
//                j--;
//                if (j == 3)
//                {
//                    printf("W");
//                    num = 1;
//                    break;
//                }
//            }
//            if (num == 0)
//                printf("a");
//        }
//    }
//}
//void G_puts(int arr[], int i)
//{
//    int j = i - 1, num = 0;
//    while (arr[j] == 0)
//    {
//        j--;
//        if (j == -1)
//        {
//            num = 1;
//            break;
//        }
//    }
//    if (num == 0 && j != i - 1)
//        printf("a");
//    while (j != -1)
//    {
//        if (arr[j] == 1)
//            printf("b");
//        else if (arr[j] == 2)
//            printf("c");
//        else if (arr[j] == 3)
//            printf("d");
//        else if (arr[j] == 4)
//            printf("e");
//        else if (arr[j] == 5)
//            printf("f");
//        else if (arr[j] == 6)
//            printf("g");
//        else if (arr[j] == 7)
//            printf("h");
//        else if (arr[j] == 8)
//            printf("i");
//        else if (arr[j] == 9)
//            printf("j");
//        if (arr[j] != 0)
//        {
//            if (j == 3)
//                printf("Q");
//            else if (j == 2)
//                printf("B");
//            else if (j == 1)
//                printf("S");
//            j--;
//        }
//        else if (arr[j] == 0)
//        {
//            while (arr[j] == 0)
//            {
//                j--;
//                if (j == -1)
//                {
//                    num = 1;
//                    break;
//                }
//            }
//            if (num == 0)
//            {
//                printf("a");
//            }
//        }
//    }
//}
//int main()
//{
//    int n, i = 0;
//    scanf("%d", &n);
//    int arr[10];
//    while (n != 0)
//    {
//        arr[i] = n % 10;
//        n /= 10;
//        i++;//这里最终的i就是位数了
//    }
//    if (i == 9)
//    {
//        Y_puts(arr, i);
//        W_puts(arr, 8);
//        G_puts(arr, 4);
//    }
//    else if (i <= 8 && i >= 5)
//    {
//        W_puts(arr, i);
//        G_puts(arr, 4);
//    }
//    else if (i >= 1 && i <= 4)
//    {
//        G_puts(arr, i);
//    }
//    else
//        printf("a");
//    return 0;
//}