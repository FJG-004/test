#define _CRT_SECURE_NO_WARNINGS 1
//#include "saleData.h"
//int main()
//{
//	int n = 0;
//	cout << "How many members do you want to input?:";
//	cin >> n;
//	double price = 0.0;
//	struct saleData data[10];
//	struct saleData sum[10];
//	//��������
//	for (int i = 0; i < n; i++)
//	{
//		cin >> data[i].bookNo >> data[i].soldNum >> price;
//		data[i].revenue = data[i].soldNum * price;
//	}
//
//	//����������з���
//	sum[0] = data[0];
//	int pj = 1;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (!(sum[j].bookNo).empty())
//			{
//				if (sum[j].bookNo == data[i].bookNo)
//				{
//					sum[j].soldNum += data[i].soldNum;
//					sum[j].revenue += data[i].revenue;
//					break;
//				}
//			}
//			else
//			{
//				sum[j] = data[i];
//				pj++;
//				break;
//			}
//		}
//	}
//
//	//���
//	for (int i = 0; i < pj; i++)
//	{
//		cout << sum[i].bookNo << " totalNum: " << sum[i].soldNum << " totalrevenue: " << sum[i].revenue << endl;
//	}
//	
//	return 0;
//}
 
 
//�Ľ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//struct saleData
//{
//    string bookNo;
//    unsigned soldNum = 0;
//    double revenue = 0.0;
//};
//
//int main()
//{
//    int n = 0;
//    cout << "How many members do you want to input?:";
//    cin >> n;
//
//    // ����������Ч��
//    if (n <= 0) {
//        cout << "Invalid input. Please enter a positive number." << endl;
//        return 1;
//    }
//
//    double price = 0.0;
//    vector<saleData> data;
//    vector<saleData> sum;
//
//    // ��������
//    for (int i = 0; i < n; i++)
//    {
//        saleData temp;
//        cin >> temp.bookNo >> temp.soldNum >> price;
//
//        // ����������Ч��
//        if (temp.soldNum < 0 || price < 0) {
//            cout << "Invalid input. Sold number and price should be non-negative." << endl;
//            return 1;
//        }
//
//        temp.revenue = temp.soldNum * price;
//        data.push_back(temp);
//    }
//
//    // ����������з���
//    for (const auto& item : data)
//    {
//        bool found = false;
//        for (auto& s : sum)
//        {
//            if (s.bookNo == item.bookNo)
//            {
//                s.soldNum += item.soldNum;
//                s.revenue += item.revenue;
//                found = true;
//                break;
//            }
//        }
//        if (!found)
//        {
//            sum.push_back(item);
//        }
//    }
//
//    // ���
//    for (const auto& s : sum)
//    {
//        cout << s.bookNo << " totalNum: " << s.soldNum << " totalrevenue: " << s.revenue << endl;
//    }
//
//    return 0;
//}
