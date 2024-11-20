#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//    char arr[10000];
//    scanf("%s",arr);
//    int n = strlen(arr);
//    char* str;
//    str = (char*)malloc(n * sizeof(char));
//    strcpy(str, arr);
//    int g=0,p=0,l=0,t=0;
//    for(int i=0;i<n;i++)
//    {
//        if(str[i]=='G'||str[i]=='g')
//            g++;
//        if(str[i]=='P'||str[i]=='p')
//            p++;
//        if(str[i]=='L'||str[i]=='l')
//            l++;
//        if(str[i]=='T'||str[i]=='t')
//            t++;
//    }
//    int g1=0, p1=0,l1=0, t1=0;
//    while(g1+p1+l1+t1!=4)
//    {
//        if (g != 0)
//        {
//            printf("G");
//            g--;
//        }
//        else
//            g1 = 1;
//        if (p != 0)
//        {
//            printf("P");
//            p--;
//        }
//        else
//            p1 = 1;
//        if (l != 0)
//        {
//            printf("L");
//            l--;
//        }
//        else
//            l1 = 1;
//        if (t != 0)
//        {
//            printf("T");
//            t--;
//        }
//        else
//            t1 = 1;
//    }
//    
//    return 0;
//}