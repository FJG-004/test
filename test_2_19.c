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
//	//这样写，不管有多少对都能分割出来
//	for (char* pr = strtok(ptr, arr); pr != NULL;pr = strtok(NULL, arr))
//	{
//		printf("%s\n", pr);
//	}
//	////麻烦写法
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
//	//因为发生整形提升，则arr[0]+1的结果是98
//	//为int型，故输出结果为4
//
//	return 0;
//}
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));//7个字节(包括\0的数组大小)
//	printf("%d\n", sizeof(a + 0));//4(首元素地址大小)
//
//	printf("%d\n", sizeof(*a));//1
//	printf("%d\n", sizeof(a[1]));//1
//	
//	printf("%d\n", sizeof(&a));//4  /  8
//	printf("%d\n", sizeof(&a + 1));//跳过整个数组的地址4  /  8
//	printf("%d\n", sizeof(&a[0] + 1));//第二个元素的地址4  /  8
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