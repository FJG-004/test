#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int My_strcmp(const char* a, const char* b)
//{
//	assert(a && b);
//	while (*a == *b)
//	{
//		if (*a == '\0')
//		return 0;
//		a++;
//		b++;
//	}
//
//	return (*a - *b);
//}
//int main()
//{
//	char a[20] = "abcd";
//	char b[] = "abce";
//	int ret = My_strcmp(a, b);
//	printf("%d", ret);
//
//	return 0;
//}
//int main()
//{
//	char a[20] = "ab";
//	char b[20] = "bit";
//	strncpy(a, b, 3);
//
//	return 0;
//}