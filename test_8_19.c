#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//                                                                       do while(����ִ��һ�Σ�
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <=10);
//
//	return 0;
//}
//                                                                               �׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	int b = 0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++)
//	{
//		a *= i;//����һ�ο�ʼ*
//		b += a;
//	}
//
//	printf("%d", b);
//	return 0;
//}
//                                                                             �׳˺�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 1;
//	int b = 0;
//	
//	for (n = 1; n <= 3; n++)
//	{
//		for (i = 1; i <= n; i++)//ÿ�ζ���1��ʼ*
//		{
//			a *= i;
//		}
//		b += a;
//		a = 1;//�ؼ�
//	}
//	printf("%d", b);
//	return 0;
//}
//                                                                           ���ֲ��ҷ�
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;

	while (left <= right)
	{
		if (arr[mid] < k)
		{
			left = mid ++;
		}
		else if(arr[mid] > k)
		{
			right = mid --;
		}
		else
		{
			printf("�ҵ��ˣ�%d", arr[mid]);
			break;
		}
	}
	if(left>right)
	{
		printf("û�ҵ�");
	}
	return 0;
}