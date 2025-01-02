#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//struct link
//{
//    int data;
//    struct link* next;
//};
//
//struct link* AppendNode(struct link* head, int data);
//void DisplyNode(struct link* head);
//void DeleteMemory(struct link* head);
//
//int main()
//{
//    char c;
//    int data = 0;
//    struct link* head = NULL;      /* ����ͷָ�� */
//    while (1)
//    {
//        scanf("%d", &data);
//        if (data == -1)
//            break;
//        head = AppendNode(head, data);/* ��headΪͷָ�������ĩβ��ӽڵ� */
//    }
//    DisplyNode(head);        /* ��ʾ��ǰ�����еĸ��ڵ���Ϣ */
//    DeleteMemory(head);           /* �ͷ����ж�̬������ڴ� */
//    return 0;
//}
//
//struct link* AppendNode(struct link* head, int data)
//{
//    struct link* p = NULL, * pr = head;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        exit(1);
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
//    p->data = data;
//    p->next = NULL;
//
//    return head;
//}
//void DisplyNode(struct link* head)
//{
//    struct link* p = head;
//    while (p != NULL)
//    {
//        printf("%d", p->data);
//        if (p->next != NULL)
//        {
//            printf("->");
//        }
//    }
//}
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
//#include <stdio.h>
//#include <stdlib.h>
//struct link
//{
//    int data;
//    struct link* next;
//};
//
//struct link* AppendNode(struct link* head, int data);
//void DisplyNode(struct link* head);
//void DeleteMemory(struct link* head);
//struct link* DeleteNode(struct link* head, int data);
//
//int main()
//{
//    int data = 0;
//    struct link* head = NULL;      /* ����ͷָ�� */
//    while (1)
//    {
//        scanf("%d", &data);
//        if (data == -1)
//            break;
//
//        head = AppendNode(head, data);/* ��headΪͷָ�������ĩβ��ӽڵ� */
//    }
//    DisplyNode(head);        /* ��ʾ��ǰ�����еĸ��ڵ���Ϣ */
//    scanf("%d", &data);
//    head = DeleteNode(head, data);
//    DisplyNode(head);        /* ��ʾ��ǰ�����еĸ��ڵ���Ϣ */
//    DeleteMemory(head);           /* �ͷ����ж�̬������ڴ� */
//    return 0;
//}
//struct link* AppendNode(struct link* head, int data)
//{
//    struct link* p = NULL, * pr = head;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        exit(1);
//    }
//    if (head == NULL)
//    {
//        head = p;
//    }
//    else
//    {
//        while (pr->next!=NULL)
//        {
//            pr = pr->next;
//        }
//        pr->next = p;
//    }
//    p->data = data;
//    p->next = NULL;
//
//    return head;
//}
//void DisplyNode(struct link* head)
//{
//    struct link* p = head;
//    while (p != NULL)
//    {
//        printf("%d", p->data);
//        if (p->next != NULL)
//        {
//            printf("->");
//        }
//        p = p->next;
//    }
//}
//struct link* DeleteNode(struct link* head, int data)
//{
//    struct link* p = head, * pr = head;
//    if (head == NULL)
//    {
//        return head;
//    }
//    while (p->data != data && p->next != NULL)
//    {
//        pr = p;
//        p = p->next;
//    }
//    if (p->data == data)
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
//    }
//    else
//        printf("NOTFINDING");
//}
//void DeleteMemory(struct link* head)
//{
//    struct link* p = head, * pr = NULL;
//    if (p->next != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}
//#include <stdio.h>
//#include <stdlib.h>
//struct link
//{
//    int data;
//    struct link* next;
//};
//
//struct link* AppendNode(struct link* head, int data);
//void DisplyNode(struct link* head);
//void DeleteMemory(struct link* head);
//struct link* DeleteNode(struct link* head, int data);
//struct link* InsertNode(struct link* head, int nodeData);
//
//int main()
//{
//    char    c;
//    int data = 0;
//    struct link* head = NULL;      /* ����ͷָ�� */
//    while (1)
//    {
//        scanf("%d", &data);
//        if (data == -1)
//            break;
//
//        head = AppendNode(head, data);/* ��headΪͷָ�������ĩβ��ӽڵ� */
//    }
//    DisplyNode(head);        /* ��ʾ��ǰ�����еĸ��ڵ���Ϣ */
//    scanf("%d", &data);
//    head = InsertNode(head, data);
//    DisplyNode(head);        /* ��ʾ��ǰ�����еĸ��ڵ���Ϣ */
//    DeleteMemory(head);           /* �ͷ����ж�̬������ڴ� */
//    return 0;
//}
//struct link* AppendNode(struct link* head, int data)
//{
//    struct link* p = NULL, * pr = head;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        exit(1);
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
//    p->data = data;
//    p->next = NULL;
//
//    return head;
//}
//void DisplyNode(struct link* head)
//{
//    struct link* p = head;
//    while (p != NULL)
//    {
//        printf("%d", p->data);
//        if (p->next != NULL)
//        {
//            printf("->");
//        }
//        else
//        {
//            printf("\n");
//        }
//        p = p->next;
//    }
//}
//struct link* InsertNode(struct link* head, int data)
//{
//    struct link* p = head, * pr = head, *temp = NULL;
//    p = (struct link*)malloc(sizeof(struct link));
//    if (p == NULL)
//    {
//        exit(1);
//    }
//    p->data = data;
//    p->next = NULL;
//    if (head == NULL)
//    {
//        head = p;
//        return head;
//    }
//    while (pr->data < data && pr->next != NULL)
//    {
//        temp = pr;
//        pr = pr->next;
//    }
//    if (pr->data >= data)
//    {
//        if (pr == head)
//        {
//            p->next = head;
//            head = p;
//        }
//        else
//        {
//            pr = temp;
//            p->next = pr->next;
//            pr->next = p;
//        }
//    }
//    else
//    {
//        pr->next = p;
//    }
//}
//void DeleteMemory(struct link* head)
//{
//    struct link* p = head, * pr = NULL;
//    if (p->next != NULL)
//    {
//        pr = p;
//        p = p->next;
//        free(pr);
//    }
//}