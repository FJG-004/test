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
//    printf("�Ƿ�����һ���ڵ㣨Y/N or y/n��:");
//    scanf("%c", &c);
//    while (c == 'Y' || c == 'y')
//    {
//        head = Addelement(head);
//        Prielement(head);
//        printf("�Ƿ�����һ���ڵ㣨Y/N or y/n��:");
//        scanf(" %c", &c);
//        i++;
//    }
//    printf("\n");
//    printf("��һ��������%d���ڵ�\n\n", i);
//
//    //char d;
//    //printf("�Ƿ�ɾ��һ���ڵ㣨Y/N or y/n��:");
//    //scanf(" %c", &d);
//    //while (d == 'Y' || d == 'y')
//    //{
//    //    int p;
//    //    printf("������Ҫɾ�������ݣ�");
//    //    scanf("%d", &p);
//    //    head = DeleteNode(head, p, &i);
//    //    Prielement(head);
//    //    printf("�Ƿ�ɾ��һ���ڵ㣨Y/N or y/n��:");
//    //    scanf(" %c", &d);
//    //}
//    //printf("\n");
//    //printf("��һ��������%d���ڵ�\n\n", i);
//
//    char d;
//    printf("�Ƿ����һ���ڵ㣨Y/N or y/n��:");
//    scanf(" %c", &d);
//    while (d == 'Y' || d == 'y')
//    {
//        int p;
//        printf("������Ҫ��������ݣ�");
//        scanf("%d", &p);
//        head = InsertNode(head, p, &i);
//        Prielement(head);
//        printf("�Ƿ��������һ���ڵ㣨Y/N or y/n��:");
//        scanf(" %c", &d);
//    }
//    printf("\n");
//    printf("��һ��������%d���ڵ�\n\n", i);
//
//    DeleteMemory(head);
//
//    return 0;
//}
////�������ܣ�����һ���ڵ㣬����ڵ�������һ����������
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
////��ӡ�����ڵ������
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
////�ͷ������и��ڵ���ռ�е��ڴ�
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
////�������ܣ�ɾ��һ���ڵ㣬������ɾ���ڵ��������ͷָ��
////ͬʱ��¼ɾ���󣬽ڵ�ʵ���������˶��ٸ�
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
//        (*i)--;//����Ҫ�����ţ�����������
//    }
//    else
//    {
//        printf("Not Find\n");
//    }
//    return head;
//}
////�������ܣ�����һ���ڵ㣬ͬʱ��¼�������ӵ��ֽ���
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