//#include<iostream>
//#include<string>
//using namespace std;
////ʵ�ֿ�������
//int Partition(int arr[], int lower, int high)
//{
//	int pivot = arr[lower];
//	while (lower < high)
//	{
//		while (lower<high && arr[high]>pivot)
//			high--;
//		arr[lower] = arr[high];
//		while (lower < high && arr[lower] < pivot)
//			lower++;
//		arr[high] = arr[lower];
//	}
//	arr[lower] = pivot;
//
//	return lower;
//}
//void Quickarr(int arr[], int lower, int high)
//{
//	if (lower < high)
//	{
//		int pivot_pos = Partition(arr, lower, high);
//		Quickarr(arr, lower, pivot_pos - 1);
//		Quickarr(arr, pivot_pos + 1, high);
//
//	}
//}
//int main()
//{
//	int arr[6] = { 132,46,78,32,4,3487 };
//	Quickarr(arr, 0, 5);
//	for (int i = 0; i < 6; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	return 0;
//}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//int main()
//{
//    int arr[] = { 1123,456,84,4,84,348,78 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    int begin = 0, end = size - 1;
//    while (begin < end)
//    {
//        int min = begin;
//        int max = begin;
//        // �ҳ���ǰ���� [begin, end] �ڵ���Сֵ�����ֵ������
//        for (int i = begin; i <= end; i++)
//        {
//            if (arr[min] > arr[i])
//            {
//                min = i;
//            }
//            if (arr[max] < arr[i])
//            {
//                max = i;
//            }
//        }
//        // ������Сֵ�����俪ͷ
//        std::swap(arr[min], arr[begin]);
//        // ������ֵ������ǡ����ԭ���� begin λ�ã�����ǰ�潻���� min �� begin����ʱ���ֵ��������Ϊ min
//        if (max == begin)
//        {
//            max = min;
//        }
//        // �������ֵ������ĩβ
//        std::swap(arr[max], arr[end]);
//        // ��С����
//        begin++;
//        end--;
//    }
//    // �������������
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << std::endl;
//    }
//    return 0;
//}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

//int main()
//{
//    int arr[] = { 1123,456,84,4,84,348,78 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    //��������
//    for (int i = 0; i < size - 1; i++)
//    {
//        //���������ĩβ
//        int end = i;
//        //���������
//        int temp = arr[end + 1];
//        while (end >= 0)
//        {
//            if (arr[end] > temp)
//            {
//                arr[end + 1] = arr[end];
//                end--;
//            }
//            else
//            {
//                break;
//            }
//        }
//        arr[end + 1] = temp;
//    }
//    for (int i = 0; i < size; i++)
//    {
//        std::cout << arr[i] << std::endl;
//    }
//    return 0;
//}