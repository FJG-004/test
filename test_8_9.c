#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//                                                                            �����ĵݹ�(���»�С��
//                                                                            ��ӡһ��������λ�ϵ���
//void print(int n)
//{
//	if (n > 9)//if�����жϣ�ִֻ��һ�Ρ�������ִ������˳��ģ��ȿ���ʲô�����ʲô
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);//����Ŀո�
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}
//                                                                                  ջ���
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//	
//}
//int main()
//{
//	test(1);
//	return 0;
//}
//�ݹ������
//1.�������ݹ飬Ҫ������������ÿ�εݹ鶼Խ�ӽ�����������
//2.�ݹ��β���̫�
//                                                                          ����strlen���ַ�������
//                                                                          1.������ʱ����������
//int my_str(char* str)
//{
//	int count = 0;//������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//	    str++;                                                   //��ַ+1����˼������Ųһ��λ�õ���һ��Ԫ��
//	} 
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", my_str(arr));                                //�������൱����Ԫ�ص�ַ��Ҳ���Ǵ���ȥ����'a'�ĵ�ַ
//
//	return 0;
//}
//                                                                       2.��������ʱ����������(�ݹ飩
//int my_str(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_str(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", my_str(arr));
//
//	return 0;
//}