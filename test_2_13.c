#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(a));//��ֻ��6��
//	printf("%d\n", sizeof(a[0]+1));//��������
//
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(a));//���ֵ(ֱ���ҵ�\0)
//	printf("%d\n", strlen(a + 0));//���ֵ
//
//	//printf("%d\n", strlen(*a));
//	//strlen��Ϊ���������ǵ�ַ����strlen�����61('a'��ASCIIֵ��ʮ������)���ĵ�ַ
//	//��Σ��
//	//printf("%d\n", strlen(a[1]));
//	
//	printf("%d\n", strlen(&a));//���ֵ
//	//��������ֵ��strlen(a)һ������Ȼ������ַ�����Ͳ�һ��
//	//����strlen���յ�������Զ����char*���յ�
//	printf("%d\n", strlen(&a + 1));//���ֵ - 6
//	printf("%d\n", strlen(&a[0] + 1));//���ֵ - 1
//
//
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));//7
//	printf("%d\n", sizeof(a + 0));//4  /  8
//
//	printf("%d\n", sizeof(*a));//1
//	printf("%d\n", sizeof(a[1]));//1
//
//	printf("%d\n", sizeof(&a));//4  /  8
//	printf("%d\n", sizeof(&a + 1));//������������ĵ�ַ4  /  8
//	printf("%d\n", sizeof(&a[0] + 1));//�ڶ���Ԫ�صĵ�ַ4  /  8
//
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", strlen(a));//6
//	printf("%d\n", strlen(a + 0));//6
//
//	printf("%d\n", strlen(*a));//err
//	printf("%d\n", strlen(a[1]));//err
//
//	printf("%d\n", strlen(&a));//6
//	printf("%d\n", strlen(&a + 1));//���ֵ
//	printf("%d\n", strlen(&a[0] + 1));//5
//
//	return 0;
//}
//int main()
//{
//	char *p = "abcdef";
//		printf("%d\n", sizeof(p));//4  /  8
//		//ָ������д�ŵ���'a'�ĵ�ַ
//		printf("%d\n", sizeof(p + 1));//'b'�ĵ�ַ4  /  8
//	
//		printf("%d\n", sizeof(*p));//1
//		printf("%d\n", sizeof(p[0]));//1
//	
//		printf("%d\n", sizeof(&p));//4  /  8
//		//"abcdef"�����ڳ�������������p�����ݴ����ջ��
//		//����������һ����&pȡ����ջ���еĵ�ַ
//		printf("%d\n", sizeof(&p + 1));
//		//p�ڴ���λ������һ��ָ�������С��ĵ�ַ
//		printf("%d\n", sizeof(&p[0] + 1));//'b'�ĵ�ַ
//	
//
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", (p));//6
//	printf("%d\n", strlen(p + 1));//5
//
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ(�������Ǹ����ֵû��ϵ)
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	//�����ţ���ʾ������ά����Ĵ�С
//	printf("%d\n",sizeof(a[0][0]));//��Ԫ�ش�С4
//	printf("%d\n",sizeof(a[0]));//16
//	//�����ţ���ʾ��һ�е������С
//	printf("%d\n",sizeof(a[0] + 1));//4  /  8
//	//�����a[0]��ʾ&a[0][0],����ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//��һ�еڶ���Ԫ��4
//	printf("%d\n",sizeof(a + 1));//4  /  8
//	//�����a��ʾa[0]��һ�еĵ�ַ��+1�ǵڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(a + 1)));//�ڶ��е������С16
//	printf("%d\n",sizeof(&a[0] + 1));//�ڶ��еĵ�ַ4  /  8
//	printf("%d\n",sizeof(*(&a[0] + 1)));//�ڶ��������С16
//	printf("%d\n",sizeof(*a));//16
//	//a��ʾ��һ�еĵ�ַ������ǵ�һ��
//	printf("%d\n",sizeof(a[3]));//16
//	//sizeofֻҪ֪�����ͣ�����֪�������ֽ�
//	//����sizeof(int)
//
//		return 0;
//}
//struct Test
//{
//int Num;
//char* pcName;
//short sDate;
//char cha[2];
//short sBa[4];
//}*p = (struct Test*)0x100000;
////����p��ֵΪ0x100000.���±���ʽ��ֵ�ֱ�Ϊ����?
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	return 0;
//}