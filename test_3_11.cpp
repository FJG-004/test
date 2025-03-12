//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//const int N = 1e5;
//int a[N];
//bool vis[N];
//void dfs(int tem, int n)
//{
//	if (tem == n + 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			cout << a[i] << " \n"[i == n];
//		}
//		return;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (vis[i])continue;
//			a[tem] = i;
//			vis[i] = true;
//			dfs(tem + 1, n);
//			vis[i] = false;
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	dfs(1, n);
//
//	return 0;
//}


//#include"test.h"
//vector<int> v;
//void output(vector<int>& v)
//{
//	for (auto& i : v)cout << setw(5) << i;
//	cout << endl;
//}
//int main()
//{
//	output(v);
//	v = vector<int>(5);
//	output(v);
//	v = vector<int>(3, 5);
//	output(v);
//	for (int i = 0; i < 10; i++)v.push_back(i);
//	output(v);
//	//生序排序数组，并去重
//	sort(v.begin(), v.end());
//	v.erase(unique(v.begin(), v.end()), v.end());
//	output(v);
//
//	return 0;
//}