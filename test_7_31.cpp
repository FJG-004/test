#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                        while
//int main()
//{
//	int i = 1;
//
//	//while (i<=10)
//	//{
//	//	if (5 == i)
//	//		break;//��while�У�break�������õ���ֹѭ��
//	//	printf("%d\n", i);
//	//	i++;
//	//}
//
//	while (i <= 10)   //�жϲ���
//		{
//		if (5 == i)
//			continue;//��whi1eѭ���У�continue����������������ѭ��continue��ߵĴ���
//		             //ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//			printf("%d\n", i);
//			i++;
//		}
//	return 0;
//}

// EOF=edd of file�ļ�������־

//int main()
//{
//	int ch = getchar();//��ȡһ���ַ�
//		printf("%c",ch);
//		putchar(ch);//���һ���ַ�
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;                                         //getchar��\n���س���Ҳ���ȡ���������ʱ�Զ�����
//	while ((ch = getchar()) != EOF)                      //��=�ǲ����ڵ���˼����=EOF����û����������û����������
//	{                                                     //��������ܶ���е����ӣ���while��
//		putchar(ch);
//	}
//	                                           //   getchar      ������       ����
//	return 0;
//}
 
 
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�����������������ǵ�ַ���ʲ���&
//	printf("��ȷ������(Y/N):>");
//
//	//��������
//	//getchar();//����'\n'
//
//	//������������ַ�
//	int a = 0;
//	while ((a = getchar()) != '\n')
//	{
//		;
//	}
//	
//	int ch = getchar();
//	if (ch == 'Y')//�����ַ��õ�����
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ�ϴ���");
//	}
//
//	return 0;
//}
//                                                                                           ���˲���while
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		printf("hehe\n");
//		i++;
//	}
//
//	printf("haha");
//
//	return 0;
//}

 
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//			putchar(ch);
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;                                         //��ʼ��
//
//	while (i <= 10)                                    //�жϲ���
//	{
//		printf("%d\n", i);
//		i++;                                           //��������
//	}
//
//
//	return 0;
//}