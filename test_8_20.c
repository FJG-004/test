#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>//Sleep
//                                                                    �ַ����������м���
//int main()
//{
//	char arr1[] = "the world!!!!!";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1000����==1��
//		system("cls");//�����Ļ
//	}
//	printf("%s\n", arr2);
//
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i <3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//if (password == "123456");����д��,strcmpר�űȽ��ַ���
//		if (strcmp(password,"123456")==0)//�����ַ����Ƚ���strcmp��()������Ⱦͷ���0
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������,����������\n");
//		}
//	}
//	if (i == 3 && strcmp(password, "123456") != 0)//                                      ����iƾʲô�ܵ���3����������������������������
//	{
//		printf("�˳�����\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		printf("%d", i);
//	}
//
//	return 0;
//}