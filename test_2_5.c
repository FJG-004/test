#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////����
//int FIND(arr, left, right, k);
//
//int main()
//{
//	int arr[] = { 12,45,56,89,123,456,789,5466,56566 };
//	int left = 0, right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int k = -1;
//	scanf("%d", &k);
//	int n = FIND(arr, left, right, k);
//
//	if (n != -1)
//	{
//		printf("��%d��", n);
//	}
//	else
//	{
//		printf("NOT FIND!");
//	}
//	return 0;
//}
////�ݹ鷨
//int FIND(int arr[],int left ,int right,const int k)
//{
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left - (left - right) / 2;
//		if (k > arr[mid])
//		{
//			return FIND(arr, mid + 1, right, k);
//		}
//		else if (k < arr[mid])
//		{
//			return FIND(arr, left, mid-1, k);
//		}
//		else
//		{
//			return mid + 1;
//		}
//	}
//	return -1;
//}
////��ͨ��
////int FIND(int arr[],int left ,int right,int k)
////{
////	int mid = 0;
////	while (left <= right)
////	{
////		mid = left - (left - right) / 2;
////		if (k > arr[mid])
////		{
////			left = mid + 1;
////		}
////		else if (k < arr[mid])
////		{
////			right = mid - 1;
////		}
////		else
////		{
////			return mid + 1;
////		}
////	}
////	return -1;
////}
////����Ľ���
//#include <stdlib.h>
//struct link* ADD(struct link* head);
//struct link* DET(struct link* head,const int data);
//struct link* INSERT(struct link* head);
//void Pri(struct link* head);
//void Deletememory(struct link* head);
//struct link
//{
//	int data;
//	struct link* next;
//};
//int main()
//{
//	struct link* head = NULL;
//	char c;
//	printf("�Ƿ�����һ���ڵ�(Y/N or y/n):");
//	scanf("%c", &c);
//	while (c == 'Y' || c == 'y')
//	{
//		head = ADD(head);
//		Pri(head);
//		printf("�Ƿ�����һ���ڵ㣺(Y/N or y/n):");
//		scanf(" %c", &c);
//	}
//
//	printf("�Ƿ�ɾ��һ���ڵ�(Y/N or y/n):");
//	char d;
//	scanf(" %c", &d);
//	while (d == 'Y' || d == 'y')
//	{
//		int find = 0;
//		printf("������Ҫɾ�������ݣ�");
//		scanf("%d", &find);
//		head = DET(head, find);
//		Pri(head);
//		printf("�Ƿ�ɾ��һ���ڵ㣺(Y/N or y/n):");
//		scanf(" %c", &d);
//	}
//	
//	printf("�Ƿ����һ���ڵ�(Y/N or y/n):");
//	char e;
//	scanf(" %c", &e);
//	while (e == 'Y' || e == 'y')
//	{
//		head = INSERT(head);
//		Pri(head);
//		printf("�Ƿ����һ���ڵ㣺(Y/N or y/n):");
//		scanf(" %c", &e);
//	}
//
//	Deletememory(head);
//
//	return 0;
//}
////���һ���½ڵ�
//struct link* ADD(struct link* head)
//{
//	struct link* p = NULL, *pr = head;
//	int data;
//	p = (struct link*)malloc(sizeof(struct link));
//	if (p == NULL)
//	{
//		exit(0);
//	}
//	if (head == NULL)
//	{
//		head = p;
//	}
//	else
//	{
//		while (pr->next != NULL)
//		{
//			pr = pr->next;
//		}
//		pr->next = p;
//	}
//	printf("�������½ڵ�����ݣ�");
//	scanf("%d", &data);
//	p->data = data;
//	p->next = NULL;
//	
//	return head;
//}
////��ӡ���������
//void Pri(struct link* head)
//{
//	struct link* p = head;
//	int j = 1;
//	while (p != NULL)
//	{
//		printf("%5d%12d\n", j, p->data);
//		j++;
//		p = p->next;
//	}
//	if (j == 1 && p == NULL)
//	{
//		printf("�ڵ���ȫ��ɾ��\n");
//	}
//}
////�ͷ��ڴ�
//void Deletememory(struct link* head)
//{
//	struct link* p = NULL, * pr = head;
//	while (pr != NULL)
//	{
//		p = pr;
//		pr = pr->next;
//		free(p);
//	}
//}
////ɾ��һ���ڵ�
//struct link* DET(struct link* head,const int find)
//{
//	struct link* p = head, * pr = NULL;
//	if (head == NULL)
//	{
//		exit(0);
//	}
//	while (p->data != find && p->next != NULL)
//	{
//		pr = p;
//		p = p->next;
//	}
//	if (p->data == find)
//	{
//		if (p == head)
//		{
//			head = p->next;
//		}
//		else
//		{
//			pr->next = p->next;
//		}
//	}
//	else
//	{
//		printf("Not Find!\n");
//	}
//
//	return head;
//}
////����һ���ڵ�
//struct link* INSERT(struct link* head)
//{
//	struct link* p = NULL, * pr = head, * temp = NULL;
//	p = (struct link*)malloc(sizeof(struct link));
//	if (p == NULL)
//	{
//		exit(0);
//	}
//	int add = 0;
//	printf("������Ҫ��ӵ����ݣ�");
//	scanf("%d", &add);
//	p->data = add;
//	p->next = NULL;
//	while (pr->data < add && pr->next != NULL)
//	{
//		temp = pr;
//		pr = pr->next;
//	}
//	if (pr->data > add)
//	{
//		if (pr == head)
//		{
//			p->next = head;
//			head = p;
//		}
//		else
//		{
//			p->next = pr;
//			temp->next = p;
//		}
//	}
//	else
//	{
//		pr->next = p;
//	}
//	return head;
//}