#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
using namespace std;
//sort函数的应用
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int arr[10];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i];
//		cout << ' ';
//	}
//
//	return 0;
//}

////字符串排序
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#include <cstring>
//bool compare(const char* a, const char* b) {
//    return std::strcmp(a, b) < 0;
//}
//
//int main() {
//    // 定义一个char*类型的数组
//    const char* arr[] = { "banana", "apple", "cherry", "date" };
//    int size = sizeof(arr) / sizeof(arr[0]);
//    cout << size << endl;
//    // 使用std::sort进行排序
//    std::sort(arr, arr + size, compare);
//
//    // 输出排序后的数组
//    for (int i = 0; i < size; ++i) {
//        std::cout << arr[i] << std::endl;
//    }
//
//    return 0;
//}


//const这样写可以实现文件间共享
//extern const int a=10;
 
 
 
//int main()
//{
//	double a = 3.14;
//	const int& b = a;
//	cout << b;
//	return 0;
//}


//int main()
//{
//	int i = 42;
//	int& r1 = i;
//	const int& r2 = i;
//	r1++;//r1不是常量引用，可通过r1来修改i的值
//	r2++;//r2是常量引用
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	const int v2 = 0;
//	int v1 = v2;
//	int* p1 = &v1, & r1 = v1;
//	const int* p2 = &v2, * const p3 = &i, & r2 = v2;
//
//	p2 = p1;
//	return 0;
//}


//constexpr
//int main()
//{
//	constexpr int a = 555;
//  
//	return 0;
//}

#include <cctype>
////使用for类型改变字符串中的内容
//int main()
//{
//	string s1;
//	cin >> s1;
//	for (auto& c : s1)//必须定义为引用
//	{
//		c = toupper(c);
//	}
//	cout << s1;
//
//	return 0;
//}


//修改单个字符
//int main()
//{
//	string s1;
//	cin >> s1;
//	if (!s1.empty())
//	{
//		s1[0] = toupper(s1[0]);
//	}
//	cout << s1[0];
//	return 0;
//}

#include <string>
//int main()
//{
//	string s1;
//	getline(cin, s1);
//	for (decltype(s1.size())index = 0; index != s1.size() && !s1.empty(); ++index)
//	{
//		s1[index] = toupper(s1[index]);
//	}
//	cout << s1 << endl;
//
//		return 0;
//}


//int main()
//{
//	string s1;
//	getline(cin, s1);
//	if (s1.empty())
//	{
//		return 1;
//	}
//	for (char &c : s1)
//	{
//		c = 'X';
//	}
//	cout << s1;
//
//	return 0;
//}

//int main()
//{
//	//string s1;
//	//getline(cin, s1);
//	//for实现
//	/*for (decltype(s1.size())index = 0; index < s1.size() && !s1.empty(); index++)
//	{
//		s1[index] = 'x';
//	}*/
//
//
//	//whlie实现
//	/*decltype(s1.size())index = 0;
//	while (index < s1.size())
//	{
//		s1[index] = 'x';
//		index++;
//	}*/
//
//	////删除标点符号
//	//string temp;
//	//for (auto c : s1)
//	//{
//	//	if (!ispunct(c))
//	//	{
//	//		temp += c;
//	//	}
//	//}
//	//
//	//cout << temp;
//	
//	//cout << s1;
//
//	return 0;
//}

//int main()
//{
//	const string s1 = "hello world";
//	for (auto& c : s1)
//	{
//		;
//	}
//
//	return 0;
//}