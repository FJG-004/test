#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
////strtok
//int main()
//{
//	const char* arr = "@.";
//	char str[] = "zhangsan@454@12312.com";
//	char ptr[30] = { 0 };
//	strcpy(ptr, str);
//	//����д�������ж��ٶԶ��ָܷ����
//	for (char* pr = strtok(ptr, arr); pr != NULL;pr = strtok(NULL, arr))
//	{
//		printf("%s\n", pr);
//	}
//	////�鷳д��
//	//char* pr = strtok(ptr, arr);
//	//if(pr!=NULL)
//	//printf("%s\n", pr);
//	//pr = strtok(NULL, arr);
//	//if (pr != NULL)
//	//printf("%s\n", pr);
//	//pr = strtok(NULL, arr);
//	//if (pr != NULL)
//	//printf("%s\n", pr);
//	
//	return 0;
//}
//#include <assert.h>
//int main()
//{
//	char* p = NULL;
//	assert(p);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", sizeof(arr));//6
//	printf("%zu\n", sizeof(arr[0] + 1));
//	//��Ϊ����������������arr[0]+1�Ľ����98
//	//Ϊint�ͣ���������Ϊ4
//
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));//7���ֽ�(����\0�������С)
//	printf("%d\n", sizeof(a + 0));//4(��Ԫ�ص�ַ��С)
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
//	char* p = "abcdef";
//	printf("%d\n", sizeof(&p + 1));
//	printf("%d\n", sizeof(&p[0] + 1));
//
//	return 0;
//}