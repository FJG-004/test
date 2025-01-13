//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElementType;
//typedef struct Node* PtrToNode;
//struct Node {
//    ElementType Data;
//    PtrToNode   Next;
//};
//typedef PtrToNode List;
//
//List Read(); /* 细节在此不表 */
//void Print(List L); /* 细节在此不表 */
//
//List Insert(List L, ElementType X);
//
//int main()
//{
//    List L;
//    ElementType X;
//    L = Read();
//    scanf("%d", &X);
//    L = Insert(L, X);
//    Print(L);
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//List Insert(List L, ElementType X)
//{
//    List p = L, pr = L, temp = NULL;
//    p = (struct Node *)malloc(sizeof(struct Node));
//    if (p == NULL)
//    {
//        exit(0);
//    }
//    p->Data = X;
//    p->Next = NULL;
//    if (L == NULL)
//    {
//        L = p;
//        return L;
//    }
//    while (pr->Data < X && pr->Next != NULL)
//    {
//        temp = pr;
//        pr = pr->Next;
//    }
//    if (pr->Data >= X)
//    {
//        if (pr == L)
//        {
//            p->Next = L;
//            L = p;
//        }
//        else
//        {
//            pr = temp;
//            p->Next = pr->Next;
//            pr->Next = p;
//        }
//    }
//    else
//    {
//        pr->Next = p;
//    }
//    return L;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef int ElementType;
//typedef struct Node* PtrToNode;
//struct Node {
//    ElementType Data;
//    PtrToNode   Next;
//};
//typedef PtrToNode List;
//
//List Read(); /* 细节在此不表 */
//void Print(List L); /* 细节在此不表 */
//
//List Insert(List L, ElementType X);
//
//int main()
//{
//    List L;
//    ElementType X;
//    L = Read();
//    scanf("%d", &X);
//    L = Insert(L, X);
//    Print(L);
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//List Insert(List L, ElementType X)
//{
//    List newNode = (List)malloc(sizeof(struct Node));
//    if (newNode == NULL)
//    {
//        return L;
//    }
//    newNode->Data = X;
//    newNode->Next = NULL;
//    if (L->Next == NULL)
//    {
//        L->Next = newNode;
//        return L;
//    }
//    List prev = L;
//    List current = L->Next;
//    while (current != NULL && current->Data < X)
//    {
//        prev = current;
//        current = current->Next;
//    }
//    newNode->Next = current;
//    prev->Next = newNode;
//    return L;
//}