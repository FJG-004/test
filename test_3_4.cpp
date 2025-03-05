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
//	//读入数据
//	for (int i = 0; i < n; i++)
//	{
//		cin >> data[i].bookNo >> data[i].soldNum >> price;
//		data[i].revenue = data[i].soldNum * price;
//	}
//
//	//根据书码进行分类
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
//	//输出
//	for (int i = 0; i < pj; i++)
//	{
//		cout << sum[i].bookNo << " totalNum: " << sum[i].soldNum << " totalrevenue: " << sum[i].revenue << endl;
//	}
//	
//	return 0;
//}
 
 
//改进版
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
//    // 检查输入的有效性
//    if (n <= 0) {
//        cout << "Invalid input. Please enter a positive number." << endl;
//        return 1;
//    }
//
//    double price = 0.0;
//    vector<saleData> data;
//    vector<saleData> sum;
//
//    // 读入数据
//    for (int i = 0; i < n; i++)
//    {
//        saleData temp;
//        cin >> temp.bookNo >> temp.soldNum >> price;
//
//        // 检查输入的有效性
//        if (temp.soldNum < 0 || price < 0) {
//            cout << "Invalid input. Sold number and price should be non-negative." << endl;
//            return 1;
//        }
//
//        temp.revenue = temp.soldNum * price;
//        data.push_back(temp);
//    }
//
//    // 根据书码进行分类
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
//    // 输出
//    for (const auto& s : sum)
//    {
//        cout << s.bookNo << " totalNum: " << s.soldNum << " totalrevenue: " << s.revenue << endl;
//    }
//
//    return 0;
//}
