#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n", ADD);
//	printf("%p\n", &ADD);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = &ADD;
//	int ret = (*pf)(3, 2);
//
//	printf("%d", ret);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*p)(int, int) = &ADD;
//	int ret1 = (*p)(3, 2);
//	int ret2 = ADD(3, 2);
//	int ret3 = p(3, 2);//*���п���
//
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	printf("%d\n", ret3);
//
//	return 0;
//}

//int ADD(int x, int y)
//{
//	return x + y;
//}
//void PRI(int (*p)(int, int))
//{
//	int a = 3;
//	int b = 2;
//	int ret = p(a, b);
//	printf("%d\n", ret);
//}
//int main()
//{
//	PRI(ADD);
//
//	return 0;
//}


//int main()
//{
//    (*(void (*)())0)();
//
//    void(*signal(int, void (*)(int)))(int);
//    //������������һ�κ�������
//    //������signal��������������һ����int
//    //һ����void(*)(int)����ָ�룬ָ�����int,����ֵ��void
//    //�����ķ���ֵҲ��void(*)()����ָ�룬ָ�����int,����ֵ��void
//    typedef void(*vp)(int);//�൱�ڰ�void(*)(int)������Ϊvp
//    vp signal(int, vp);
//
//    return 0;
//}


//int main()
//{
//	int arr[5];//�������飬ÿ��Ԫ�ص�������int
//	int* parr1[10];//����ָ�����飬ÿ��Ԫ�ص�������int*
//	int (*parr2)[10];//��������ָ�룬ָ�����Ԫ�ظ���Ϊ10������
//	int (*parr3[10])[5];//�������ָ�������
//	//������parr3������������������10��Ԫ�أ�ÿ��Ԫ�ص�����(��������)��int (*) [5]
// 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int (*p)[10] = &arr;//����ָ�뼴��������ַ��ָ��
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.Add   2.Sub****\n");
//	printf("****3.Mul   4.Div****\n");
//	printf("****0.Exit       ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	int input = -1;
//	int a, b;
//	int ret;
//	do
//	{
//		menu();
//		printf("��Ҫ���еĲ�����:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &a, &b);
//			ret = Add(a, b);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &a, &b);
//			ret = Sub(a, b);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &a, &b);
//			ret = Mul(a, b);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &a, &b);
//			ret = Div(a, b);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*p)(int, int))
//{
//	printf("����������������:>");
//	int a, b;
//	int ret = 0;
//	scanf("%d%d", &a, &b);
//	ret = (*p)(a, b);
//	printf("%d\n", ret);
//
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.Add   2.Sub****\n");
//	printf("****3.Mul   4.Div****\n");
//	printf("****0.Exit       ****\n");
//	printf("*********************\n");
//}
//int main()
//{
//	int input = -1;
//	do
//	{
//		menu();
//		printf("��Ҫ���еĲ�����:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//
//
//	return 0;
//}