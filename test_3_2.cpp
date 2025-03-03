#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
//int main()
//{
//	string s1, s2;
//	cin >> s1;
//	cin >> s2;
//	decltype(s1.size()) n = 0, i = 0, temp = 0;
//	for (; i < s1.size(); i += temp)
//	{
//		if (s1.find(s2, i))
//		{
//			temp = s1.find(s2, i) + s2.size();
//			n++;
//		}
//	}
//	cout << n << endl;
//
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//void Find(string s1, string s2)
//{
//    decltype(s1.size()) n = 0, temp = 0, i = 0;
//    int flag = 0;
//    for (; i < s1.size();)
//    {
//        if (s1.find(s2, i) < s1.size())
//        {
//            i = s1.find(s2, i) + s2.size();
//            flag = 1;
//            n++;
//        }
//        if (flag == 0)
//        {
//            break;
//        }
//        flag = 0;
//    }
//    cout << n << endl;
//}
//int main()
//{
//    int n = 0;
//    cin >> n;
//    string s, arr;
//    cin >> s;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr;
//        Find(s, arr);
//    }
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//	string s1;
//	getline(cin, s1);//一次读入一整行
//	//cin >> s1;//每次读入一个词
//	cout << s1 << endl;
//
//	return 0;
//}
//int main()
//{
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	////比较字符串大小
//	//if (s1 == s2)
//	//{
//	//	cout << "s1==s2" << endl;
//	//}
//	//else
//	//{
//	//	if (s1 > s2)
//	//	{
//	//		cout << s1 << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << s2 << endl;
//	//	}
//	//}
//	////比较字符串长度
//	//if (s1.size() == s2.size())
//	//{
//	//	cout << "s1==s2" << endl;
//	//}
//	//else
//	//{
//	//	if (s1.size() > s2.size())
//	//	{
//	//		cout << s1 << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << s2 << endl;
//	//	}
//	//}
//
//	return 0;
//}

//字符串的连接与分隔
//int main()
//{
//	string s1,s2;
//	bool isFirst = true;//判断是不是开头
//	while (getline(cin, s1))
//	{
//		if (isFirst)
//		{
//			s2 = s1;
//			isFirst = false;
//		}
//		else
//		{
//			s2 = s2 + ' '+ s1;
//		}
//	}
//	cout << s2 << endl;
//
//	return 0;
//}


//排序
//#include <iostream>
//using namespace std;
//#include <string>
//#include <algorithm>
//void Intsort(int arr[], const int n)
//{
//    sort(arr, arr + n);
//}
//void Dousort(double arr[], const int n)
//{
//    sort(arr, arr + n);
//}
//int main()
//{
//    int n = 0;
//    cin >> n;
//    int Intarr[10];
//    double Douarr[10];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> Intarr[i];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        cin >> Douarr[i];
//    }
//    Intsort(Intarr,n);
//    for (int i = 0; i < n; i++)
//    {
//        cout << Intarr[i] << ' ';
//    }
//    cout << endl;
//    Dousort(Douarr,n);
//    for (int i = 0; i < n; i++)
//    {
//        cout << Douarr[i] << ' ';
//    }
//    cout << endl;
//
//    return 0;
//}
//extern const int a;
//int main()
//{
//	cout << a;
//
//	return 0;
//}