#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    char ch[2][5] = { "6937", "7254" }, * p[2];
//    int i, j, s = 0;
//
//    for (i = 0; i < 2; i++) {
//        p[i] = ch[i];
//    }
//    for (i = 0; i < 2; i++) {
//        for (j = 0; p[i][j] > '\0'; j += 2) {
//            s = 10 * s + p[i][j] - '0';
//        }
//    }
//    printf("%d\n", s);
//
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    static int a[4][4];
//    int* p[4], i, j;
//
//    for (i = 0; i < 4; i++) {
//        p[i] = &a[i][0];
//    }
//    for (i = 0; i < 4; i++) {
//        *(p[i] + i) = 1;
//        *(p[i] + 4 - (i + 1)) = 1;
//    }
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4; j++) {
//            printf("%d", p[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}