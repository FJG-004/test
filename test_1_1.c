#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("hello world");
//	return 0;
//}
#include <stdio.h>
//int i;//全局变量默认初始化位0
//int main()
//{
//	i--;
//	//sizeof返回的值是size_t(无符号整型)
//	//算术转换-1的补码11111111111111111111111111111111
//	//全变成有效位(2的32次方-1)
//	if (i > sizeof(i))//2的32地方-1>4(int类型的大小)
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("<");
//	}
//
//	return 0;
//}
//结构体测试
//#include <stdio.h>
//#include <stdlib.h>
//
//// 定义考生结构体
//struct Student {
//    long long id;
//    int de;
//    int cai;
//    int sum;
//};
//
//// 比较函数，用于 qsort
//int compare(const void* a, const void* b) {
//    struct Student* sa = (struct Student*)a;
//    struct Student* sb = (struct Student*)b;
//    if (sa->sum != sb->sum) return sb->sum - sa->sum;
//    if (sa->de != sb->de) return sb->de - sa->de;
//    return sa->id - sb->id;
//}
//
//int main() {
//    int n, l, h;
//    scanf("%d %d %d", &n, &l, &h);
//
//    // 分别存储四类考生
//    struct Student* class1 = (struct Student*)malloc(n * sizeof(struct Student));
//    struct Student* class2 = (struct Student*)malloc(n * sizeof(struct Student));
//    struct Student* class3 = (struct Student*)malloc(n * sizeof(struct Student));
//    struct Student* class4 = (struct Student*)malloc(n * sizeof(struct Student));
//    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
//
//    for (int i = 0; i < n; i++) {
//        struct Student s;
//        scanf("%lld %d %d", &s.id, &s.de, &s.cai);
//        s.sum = s.de + s.cai;
//        if (s.de >= l && s.cai >= l) {
//            if (s.de >= h && s.cai >= h) {
//                class1[count1++] = s;
//            }
//            else if (s.de >= h && s.cai < h) {
//                class2[count2++] = s;
//            }
//            else if (s.de < h && s.cai < h && s.de >= s.cai) {
//                class3[count3++] = s;
//            }
//            else {
//                class4[count4++] = s;
//            }
//        }
//    }
//
//    // 对每一类考生进行排序
//    qsort(class1, count1, sizeof(struct Student), compare);
//    qsort(class2, count2, sizeof(struct Student), compare);
//    qsort(class3, count3, sizeof(struct Student), compare);
//    qsort(class4, count4, sizeof(struct Student), compare);
//
//    // 输出达到最低分数线的考生总数
//    int total_count = count1 + count2 + count3 + count4;
//    printf("%d\n", total_count);
//
//    // 依次输出每一类考生
//    for (int i = 0; i < count1; i++) {
//        printf("%lld %d %d\n", class1[i].id, class1[i].de, class1[i].cai);
//    }
//    for (int i = 0; i < count2; i++) {
//        printf("%lld %d %d\n", class2[i].id, class2[i].de, class2[i].cai);
//    }
//    for (int i = 0; i < count3; i++) {
//        printf("%lld %d %d\n", class3[i].id, class3[i].de, class3[i].cai);
//    }
//    for (int i = 0; i < count4; i++) {
//        printf("%lld %d %d\n", class4[i].id, class4[i].de, class4[i].cai);
//    }
//
//    // 释放动态分配的内存
//    free(class1);
//    free(class2);
//    free(class3);
//    free(class4);
//
//    return 0;
//}
//#include <stdlib.h>
//int compare(const void* a, const void* b)
//{
//	int* sa = (int*)a;
//	int* sb = (int*)b;
//	return *sb - *sa;
//}
//int main()
//{
//	int arr[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	qsort(arr, 10, sizeof(int), compare);
//	for (int i = 0; i < 10; i++)
//	{
//
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}