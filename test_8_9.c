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
// str+1
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
// ++str
//int my_str(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_str(++str);//++�൱�ڸ�str��ֵ����+1���ᣬ�ᱣ��ԭ����ֵ
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
//�׳�                                                              ��Ϊʲô��������У�������
//int main()
//{
//	int i = 0;
//	int n = 1;
//	scanf("%d", &i);
//	for (n = 1; n < i; n++)
//	{
//		i *= n;
//		printf("%d\n", i);
//
//	}
//	
//	return 0;
//}
//                                                                           1.����
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//ѭ����һ�ֵ���
//	{
//		ret *= i;
//
//	}
//
//	printf("%d", ret);
//
//	return 0;
//}
//                                                                           2.�ݹ�
//int fac(int x)
//{
//	if(x != 1)
//	{
//		return x * fac(x - 1);
//	}
//	else
//	{
//		return 1;//ע������
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//
//	printf("%d", ret);
//
//	return 0;
//}
//                                                                    �����n��쳲�������
//                                                                          1.�ݹ�
//int count = 0;
//int Fib(int x)
//{
//	if(x==3)//��Ϊ���������ǰ����ͣ�x==3�ſ�ʼ����
//	{
//		count++;//���㡰���򡱼����˼���
//	}
//	if(x<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(x - 2) + Fib(x - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = Fib(n);
//	
//	printf("%d\n", i);
//	printf("count=%d", count);
//
//	return 0;
//}
//                                                                       2.�ǵݹ鷽ʽ
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		 c = a + b;
//		 a = b;
//		 b = c;
//		 n--;//ע������,��ͼ���
//
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = Fib(n);
//	
//	printf("%d\n", i);
//
//	return 0;
//}