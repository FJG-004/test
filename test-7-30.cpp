#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//                                                                                     ���ֵ
//int Max(int x,int y)
//{
//	if(x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Max(a, b);
//	
//	printf("%d\n", c);
//
//		return 0;
//}
//int main()
//{
//	int a = 7;
//	int b = 9;
//
//	int c = a > b ? a : b;
//
//	printf("%d",c);
//	return 0;
//}
//                                                                                        �ɻ�
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//
//	return 0;
//}
//                                                                                һ����������5�Ƿ�����
//int main()
//{
//	int a = 65;
//	if(a%5==0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}
// 
//                                                                            ��䣨�������ľ�����䣩
// 
//                                                                                   ѡ�����
//int main()
//{
//	//�﷨��ȷ���߼�����ʾ��
//	/*int age = 70;
//	if (age < 18)
//		printf("����\n");
//	else if(18<=age<35)                              //18<=age��Ϊ�棬���1��Ȼ��ͳ���1<35����������ͱ���ӡ��
//		printf("����\n");*/
//
//	int age =19;
//	if (age < 18)
//		printf("����");
//	else if (age >= 18 && age < 35)
//		printf("����");
//	else if (age >= 35 && age < 65)
//		printf("����");
//	else if (age >= 65 && age < 100)
//		printf("����");
//	//else (age >= 100)//��������
//	else
//	printf("�ϱϵ�");
//	return 0;
//}
//                                                                                   ����else
//int main()
//{
//	int a = 0;
//	int b = 5;
//	if (a == 1)//���ﲻ��������ֱ�ӷ���
//		if (b == 5)
//			printf("hehe\n");
//		else
//			printf("haha\n");//else�������ifƥ��
//
//
//	return 0;
//}
//��д��ʽ
//                                                             1 
//if (condition)                                
//{
//	return x;
//}
//return y;
//                                                      2(��������˼һ����
//if (condition)                                
//{
//	return x;
//}
//else
//{
//	return y;
//}
//int main()
//{
//	int num = 3;
//
//	if (5 == num)//��˾��д��
//		printf("hehe\n");
//
//
//
//	return 0;
//}
//                                                                              �ж�����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a % 2 == 1)
//		printf("����");
//	else
//		printf("ż��");
//
//	return 0;
//}
//                                                                          ��ӡ1��100������
//int main()
//{
	//1.
	/*int i = 0;
	while (i < 100)
	{
		i++;
		if (i % 2 == 1)
			printf("%d\n", i);
	}*/

	//2.
	/*int i = 1;
	while(i<100)
	{
		 
		printf("%d", i);
		i += 2;

	}*/

	//return 0;
//}
//                                                                                    switch
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1://case+���γ������ʽ
//		printf("����һ\n");
//		break;//break������ֹ
//	case 2:
//		printf("���ڶ�\n");
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//	case 5:
//		printf("������\n");
//	case 6:
//		printf("������\n");
//	case 7:
//		printf("������\n");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;//�����Ǻ�ϰ��
//	default:
//		printf("�������");
//		break;
//	}
//
//	return 0;
//}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;//m=3
	case 2:
		n++;//n=2
	case 3:
		switch (n)
		{
		case 1:	n++;//����
		case 2:	m++, n++;//m=4,n=3
			break;
		}
	case 4:
		m++;//m=5
		break;
	}
	printf("m=%d,n=%d", m, n);

	return 0;
}