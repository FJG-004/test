#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("hello world");
//	return 0;
//}
#include <stdio.h>
//int i;//ȫ�ֱ���Ĭ�ϳ�ʼ��λ0
//int main()
//{
//	i--;
//	//sizeof���ص�ֵ��size_t(�޷�������)
//	//����ת��-1�Ĳ���11111111111111111111111111111111
//	//ȫ�����Чλ(2��32�η�-1)
//	if (i > sizeof(i))//2��32�ط�-1>4(int���͵Ĵ�С)
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
//�ṹ�����
//#include <stdio.h>
//#include <stdlib.h>
//
//// ���忼���ṹ��
//struct Student {
//    long long id;
//    int de;
//    int cai;
//    int sum;
//};
//
//// �ȽϺ��������� qsort
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
//    // �ֱ�洢���࿼��
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
//    // ��ÿһ�࿼����������
//    qsort(class1, count1, sizeof(struct Student), compare);
//    qsort(class2, count2, sizeof(struct Student), compare);
//    qsort(class3, count3, sizeof(struct Student), compare);
//    qsort(class4, count4, sizeof(struct Student), compare);
//
//    // ����ﵽ��ͷ����ߵĿ�������
//    int total_count = count1 + count2 + count3 + count4;
//    printf("%d\n", total_count);
//
//    // �������ÿһ�࿼��
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
//    // �ͷŶ�̬������ڴ�
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