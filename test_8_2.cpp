#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                            for
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)//��ʼ�����жϲ��֣���������
//	{
//		printf("%d\n", i);
//	}
//
//
//	return 0;
//}
//                                                                                break,continue��for�г���
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i == 5)
			//break;
			//continue;

//		printf("%d\n", i);
//	}
// 
//	return 0;
//} 


                                                                 //1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
                                                              //2.����fo����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д����


									                          //  ѭ�����ڸı�ѭ������������
//1.
//int main()
//{
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d", i);
//		 i = 5;
//	}
//
//	return 0;
//}
//2.
//int main()
//{
//	int i = 0;
//	for(i=0;i<10;i++)
//	{
//		printf("%d", i);
//		int j = 0;
//		for(j=0;j<10;i++)        //ע��������i
//		{
//			printf("hehe\n", j);
//		}
//	}
//
//	return 0;
//}

                                                                         //for ��()�ڵ�ʡ��
//����һ
//int main()
//{
//	for(;;)//��������ʡ�ԣ��жϲ��ֵ�ʡ�ԣ��жϲ��ֺ�Ϊ��
//	{
//		printf("hehe");
//	}
//
//
//	return 0;
//}
 //���ֶ�
//int main()
//{
//	int x = 0;
//	int y = 0;
//
//	for(x=0,y=0;x<2 & y<3;x++,y++)
//	{
//		printf("%d %d\n", x, y);
//	}
//
//	return 0;
//}
 
                                                                            //()��ʡ������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		printf("%d", i);
//		for(;j<3;j++)//����ʡ��j=0��,j�����ڵڶ���ѭ���г�ʼ��Ϊ0�����޷�������ӡ
//		{
//			printf("hehe\n");
//		}
//	}
//
//
//	return 0;
//}
//int main()
//{
//    int x = 0;
//    int y = 0;
//
//    for(x=0,y=0;x=0;x++,y++)//һ��=Ϊ��ֵ���жϲ���Ϊ�٣���ӡ����Ϊ0
//    {
//        printf("%d %d", x, y);
//    }
//
//    return 0;
//}
//                                                                                 do while
//int main()
//{
//    int i = 0;
//    do {
//        if (i == 5)
//            continue;
//
//        printf("%d", i);
//        i++;
//    } while (i <= 10);
//
//
//    return 0;
//}
