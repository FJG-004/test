#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>//printf
#include<string.h>//strlen
//                                                                                           ��ӡ
//int main()
//{
//	printf("2233\n");
//
//		return 0;
//
//}
//                                                                                          �Ӽ�
//int main()
//{
//	int age = 10;//��������  �������� = ��ֵ
//	double weight = 75.3;
//
//	age = age + 25;
//	weight = weight + 20;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//                                                                                        ��������
//int main()
//{
//	printf("\a");
//	printf("\a");
//	printf("\a");
//	printf("\a");
//	printf("\a");
//
//}
//                                                                                    ����������ͳ���
//int main()
//{
// sizeof�ǲ�����
//siezof�������ͻ�����Ŀռ��С����λ���ֽ�byte
//	printf("%d\n", sizeof(char));//char��%c(�ַ��͸�ʽ����
//	printf("%d\n", sizeof(short));//������%d
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));//�����ȸ�������%f
//	printf("%d\n", sizeof(double));//˫���ȸ�������%lf
//
//	return 0;
//}
//                                                                      ȫ�ֱ����;ֲ��������ֳ�ͻʱ���ֲ���������
//int a = 10;//ȫ�ֱ���{}�ⲿ�����
// 
//int main()
//{
//	int a = 100;//�ֲ�����{}�ڲ������
// 
// 
//	printf("%d", a);
//	return 0;
//}
//���������������
//�ֲ������Ķ������Ǳ������ھֲ���Χ
//ȫ�ֱ����Ķ���������������
//int a = 2024;

//int main()
//{
//	int b = 4374;
//	{
//		printf("1.%d\n", b);
//
//
//
//	}
//
//	printf("2.%d\n", a);
//
//
//	return 0;
//}
//��������������ָ�����Ӵ��������ټ��ʱ���
//                                                                                            ����
//int main()
//{
//                                                                                          1.�������
// 3.14
// 10
// "hjhjk"
// 
//                                                                                       2.const���εĳ�����
	//int a = 10;
	//a = 20;

	//printf("%d\n", a);//��20
	// 
	// 
	//const int a = 10;//int��const��Ϊ�����������г����ԣ�
	//a = 20;
	// 
	// 
	//printf("%d\n", a);//����
//	int arr[10] = { 0 };
//	
//	const int n = 10;//const������������������Ӧ���ǲ��е�,[]��Ӧ��Ϊ����
//	int arr2[n] = { 0 };
//	
//	printf("%d\n", arr);
//	printf("%d", arr2);
//	
//                                                                                       3.#define����ı�ʶ������
//
//#define MAX 1000;//#define����ı�ʶ�����������ܸ��ĵģ�
//
//	int a = MAX;
//
//	MAX = 2000;//�����
//
//	printf("%d", a);
//
//	return 0;
//}
//                                                                                               4.ö�ٳ���
                                                                                            //����һһ�оٵĳ���
//enum Sex {
//
//	male ,//����ֵ�ܸ�
//	female,//  ,��Ҫ��
//	secret
//
//};
//
//int main()
//{
//	enum Sex s = female;
//
//	printf("%d\n", male);//����������ģ��粻��������male = 3
//	printf("%d\n", s);
//	printf("%d\n", secret);
//
//	return 0;
//}
//                                                                                                 ����
//int main()
//{
//	char arr[] = "hello";//����Ҫע����λ��
//	�ַ�����β��������һ��\0
//	\0���ַ����Ľ�����־
//	\0��ת���ַ�
//
//	return 0;
//}
//                                                                                         �ַ����������ַ�������
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };//���ֶ���\0   //���������ʼ�������Բ�ָ����С��������ݳ�ʼ������ȷ����С
//
//	printf("%s\n", arr1);                                                                 //%s���ַ����͸�ʽ����
//	printf("%s\n", arr2);
//	
// char arr[5] = { 'a','b','c' };//����[]д����ֵ��û����������
//
//	printf("%s\n", arr);
//
//
//	                                                                                         �����ַ�������
//	int length = strlen("abc");
//
//	printf("%d", length);//\0�������ַ�������
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}
//int main()
//{
	                                                                                        // %cΪ�ַ���ʶ�ַ�
	 
	 
	//printf("\\test");//\test�е�\t����ʶ��
	//printf("%c\n", '\x30');//0-48  ʮ������    //%c  ASCII��
	//printf("%c\n",'\130');//X-88  �˽���
	//printf("%c\n",'\'');//'''���ܴ�ӡ������ǰ���������Ż���Ϊ��һ�Ե�����
	//printf("'");
	//printf("%d", strlen("c:\test\328\test.c"));//14
	//return 0;
//}
//                                                                                                ѡ�����
// int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//	scanf("%d", &input);
//	if (input == 1)//���ﲻҪ�ӣ�
//	{ 
//		printf("��offer\n"); 
//	}
//	else//ʵ��Ч����ֻҪ������1�������Ķ��ǡ�������
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}
//                                                                                                ѭ�����
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д����");
//		//printf("д����:%d",line);//д����ǰ�����
//			line++;
//	}
//	if(line == 30000)
//	{
//		printf("offer");
//	}
//
//	return 0;
//}
//                                                                                                �Ӽ���1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d", c);
//
//	return 0;
//}
//                                                                       �Ӽ���2������������Ȼǰ�ڷ�����������ֱ����ADD����
//int ADD(int x, int y)                                                    // ��Ҫ����Ķ�����������������������ٷŻ�ȥ
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = ADD(a, b);
//	printf("%d",c);
//
//	return 0;
//}
//                                                                                            ���飨while)
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//���������±������ʵ�
//	int i = 0;
//
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//
//		i++;
//	}
//	
//char ar[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
// return 0;
//}