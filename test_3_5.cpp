#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <vector>
#include <string>
//int main()
//{
//	string word;
//	vector<string> arr;
//	while (cin >> word)
//	{
//		arr.push_back(word);
//	}
//	
//	return 0;
//}


//#include <cctype>
//int main()
//{
//	string word;
//	vector<string> arr;
//	while (cin >> word)
//	{
//		arr.push_back(word);
//	}
//	for (decltype(arr.size())i = 0; i < arr.size(); i++)
//	{
//		for (auto& c : arr[i])
//		{
//			c = toupper(c);
//		}
//	}
//
//	for (decltype(arr.size())i = 0; i < arr.size(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//		return 0;
//}



////三种不同的初始化方式
//int main()
//{
//	vector<int> arr1(10, 0);
//	vector<int> arr2{ 0,0,0,0,0,0,0,0,0,0 };
//	int a = 0;
//	vector<int> arr3;
//	for (int i = 0; i < 10; i++)
//	{
//		arr3.push_back(a);
//    }
//
//	return 0;
//}



//int main()
//{
//	int a;
//	vector<int> arr;
//	while (cin >> a)
//	{
//		arr.push_back(a);
//	}
//	decltype(arr.size()) left = 0, right = arr.size() - 1;
//	while (left <= right)
//	{
//		cout << arr[left] + arr[right] << endl;
//		left++;
//		right--;
//	}
//	return 0;
// 
//}