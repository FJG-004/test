#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//srand
#include <time.h>//time
//                                                                         ��������Ϸ
//void menu()
//{
//	printf("************************\n");
//	printf("*********1.play*********\n");
//	printf("*********2.exit*********\n");
//	printf("************************\n");
//
//}
//void game()
//{
//	//����1��100�������
//	//srand(100);
//	int ret = rand() % 100 + 1;//��������1��100��Ч���ˣ�������123465 % 100 == 65����Ϊ100�Ļ����1ֻ��0��99
//	                           //��Ϊ100�Ļ����1ֻ��0��99����+1
//	//������
//	int guess = 0;
//	while (1)
//	{
//		printf("����������\n");
//		scanf("%d", &guess);
//		if (ret < guess)
//		{
//			printf("�´���\n");
//		}
//		else if(ret>guess)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ�����������ʱ�任�������һ������,�����������оͲ��ö��������㣬
//	                                //�ʲ�����game()��
//	do
//	{
//		menu();
//		printf("��ѡ��:>(1/0)");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��ʼ��Ϸ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("����������\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}