#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//struct link
//{
//    int data;
//    struct link* next;
//};
//struct link* Addelement(struct link* head);
//void Prielement(struct link* head);
//void DeleteMemory(struct link* head);
//struct link* DeleteNode(struct link* head, int FindNode, int* i);
//struct link* InsertNode(struct link* head, int Find, int* i);
//int main()
//{
//    int i = 0;
//    char c;
//    struct link* head = NULL;
//    printf("是否增加一个节点（Y/N or y/n）:");
//    scanf("%c", &c);
//    while (c == 'Y' || c == 'y')
//    {
//        head = Addelement(head);
//        Prielement(head);
//        printf("是否增加一个节点（Y/N or y/n）:");
//        scanf(" %c", &c);
//        i++;
//    }
//    printf("\n");
//    printf("您一共增加了%d个节点\n\n", i);
//
//    //char d;
//    //printf("是否删除一个节点（Y/N or y/n）:");
//    //scanf(" %c", &d);
//    //while (d == 'Y' || d == 'y')
//    //{
//    //    int p;
//    //    printf("请输入要删除的数据：");
//    //    scanf("%d", &p);
//    //    head = DeleteNode(head, p, &i);
//    //    Prielement(head);
//    //    printf("是否删除一个节点（Y/N or y/n）:");
//    //    scanf(" %c", &d);
//    //}
//    //printf("\n");
//    //printf("您一共增加了%d个节点\n\n", i);
//
//    char d;
//    printf("是否插入一个节点（Y/N or y/n）:");
//    scanf(" %c", &d);
//    while (d == 'Y' || d == 'y')
//    {
//        int p;
//        printf("请输入要插入的数据：");
//        scanf("%d", &p);
//        head = InsertNode(head, p, &i);
//        Prielement(head);
//        printf("是否继续插入一个节点（Y/N or y/n）:");
//        scanf(" %c", &d);
//    }
//    printf("\n");
//    printf("您一共增加了%d个节点\n\n", i);
//
//    DeleteMemory(head);
//
//    return 0;
//}
////函数功能：增加一个节点，并向节点中输入一个整形数据
//struct link* Addelement(struct link* head)
//{
//    struct link* p = NULL, * pr = head;
//    int data;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        exit(0);
//    }
//    if (head == NULL)
//    {
//        head = p;
//    }
//    else
//    {
//        while (pr->next != NULL)
//        {
//            pr = pr->next;
//        }
//        pr->next = p;
//    }
//    scanf("%d", &data);
//    p->data = data;
//    p->next = NULL;
//
//    return head;
//}
////打印出各节点的数据
//void Prielement(struct link* head)
//{
//    int j = 1;
//    struct link* p = head;
//    while (p != NULL)
//    {
//        printf("%5d%12d\n", j, p->data);
//        j++;
//        p = p->next;
//    }
//}
////释放链表中各节点所占有的内存
//void DeleteMemory(struct link* head)
//{
//    struct link* p = head, * pr = NULL;
//    while (p != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
////函数功能：删除一个节点，并返回删除节点后的链表的头指针
////同时记录删除后，节点实际上增加了多少个
//struct link* DeleteNode(struct link* head, int FindNode, int* i)
//{
//    struct link* p = head, * pr = head;
//    if (head == NULL)
//    {
//        exit(0);
//    }
//    while (p->data != FindNode && p->next != NULL)
//    {
//        pr = p;
//        p = p->next;
//    }
//    if (p->data == FindNode)
//    {
//        if (p == head)
//        {
//            head = p->next;
//        }
//        else
//        {
//            pr->next = p->next;
//        }
//        free(p);
//        (*i)--;//这里要加括号！！！！！！
//    }
//    else
//    {
//        printf("Not Find\n");
//    }
//    return head;
//}
////函数功能：插入一个节点，同时记录最终增加的字节数
//struct link* InsertNode(struct link* head, int Find, int* i)
//{
//    struct link* p = NULL, * pr = head, * temp = head;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        exit(0);
//    }
//    p->data = Find;
//    p->next = NULL;
//    if (head == NULL)
//    {
//        head = p;
//        (*i)++;
//    }
//    else
//    {
//        while (pr->next != NULL && pr->data < Find)
//        {
//            temp = pr;
//            pr = pr->next;
//        }
//        if (pr->data > Find)
//        {
//            if (pr == head)
//            {
//                p->next = head;
//                head = p;
//            }
//            else
//            {
//                pr = temp;
//                p->next = pr->next;
//                pr->next = p;
//            }
//        }
//        else
//        {
//            pr->next = p;
//        }
//        (*i)++;
//    }
//    return head;
//}