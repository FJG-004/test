#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                                     �ؼ���

//int main()
//{
//	int a = 10;//auto�Զ��������Զ�����/�Զ�����
//
//
//
//	return 0;
//}
//                                                                               register�Ĵ����ؼ���
//int main()
//{
//	register int a = 100;//register�ǡ����顱��a�ŵ��Ĵ�����
//
//
//	return 0;
//}


//define��include����Ԥ����ָ����ǹؼ���


//signed�з��ŵ�  50  -50
//unsigned�޷��ŵ�


//                                                                               typedef���¶������
//typedef unsigned int zbc;
//int main()
//{
//	zbc a = 100;
//
//	printf("%d", a);
//
//	return 0;
//}
//                                             1.static���ξֲ��������ı��˾ֲ��������������ڣ�ʵ���Ǹı��˱����Ĵ洢���ͣ�
//void test()
//{                                                        ջ�����ֲ������������Ĳ�����
//	static int a = 1;�����2��11                           ��������̬�ڴ����ģ�
//	//int a = 1;//������Ϊ10��2                          ��̬����ȫ�ֱ�����static���εģ���̬������
//	a++;
//	printf("%d", a);
//}//��ͨ�ĵ�����������ˣ�static���κ�Ͳ�������
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}
//                                                                                 2.static����ȫ�ֱ���
 
//static int a = 1;

 //static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ�(.c)�ڲ�����ʹ��
//����Դ�ļ�����ʹ�ã�
//ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ��������
//���Ǳ�static����֮�󣬾ͱ���˱����������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ�����
//                                                                          3.static���κ�����������ȫ�ֱ�����ࣩ
//extern int ADD(int x, int y);
//
//int main()
//{
//	int a = 6;
//	int b = 5;
//	int c= ADD(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}