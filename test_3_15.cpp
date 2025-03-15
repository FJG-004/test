//////#include"test.h"
//////const int N = 1e5;
//////int a[N];
//////bool check[N];
//////int tt = 1;
//////int n;
//////void fps()
//////{
//////	for (int i = 1; i <= n; i++)
//////	{
//////		if (check[i])continue;
//////		check[i] = true;
//////		a[tt++] = i;
//////		fps();
//////		check[i] = false;
//////		tt--;
//////	}
//////	if (tt == n) {
//////		for (int i = 1; i <= tt; i++) cout << a[i] << " \n"[i == tt];
//////	}
//////}
//////int main()
//////{
//////	ios::sync_with_stdio(0);
//////	cin.tie(0); cout.tie(0);
//////	cin >> n;
//////	for (int i = 1; i <= n; i++) a[i] = i;
//////	fps();
//////
//////	return 0;
////// 
////// #include "test.h"
////const int N = 1e5;
////int a[N];
////int tt = 1;
////stack<int> stk;
////int main()
////{
////	ios::sync_with_stdio(0);
////	cin.tie(0); cout.tie(0);
////	int n;
////	cin >> n;
////	for (int i = 1; i <= n; i++) a[i] = i;
////	for (int i = 1; i <= n; i++)
////	{
////		int x; cin >> x;
////		stk.push(x);
////		while (!stk.empty() && stk.top() == a[tt]) {
////			stk.pop();
////			tt++;
////		}
////	}
////	while (!stk.empty() && stk.top() == a[tt]) {
////		stk.pop();
////		tt++;
////	}
////	if (stk.empty() && tt == n + 1)
////	{
////		cout << "YES" << endl;
////	}
////	else
////	{
////		cout << "NO" << endl;
////	}
////	return 0;
////}
//////}
//
//#include"test.h"
//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//using ll = long long;
//
//// 计算两个vector的相似度
//double solve(const std::vector<ll>& v1, const std::vector<ll>& v2) {
//    std::unordered_set<ll> set1(v1.begin(), v1.end());
//    std::unordered_set<ll> set2(v2.begin(), v2.end());
//
//    // 计算N_t：两个集合合并后的不重复元素个数
//    std::unordered_set<ll> combined(set1);
//    for (ll num : set2) {
//        combined.insert(num);
//    }
//    ll N_t = combined.size();
//
//    // 计算N_c：两个集合的交集的不重复元素个数
//    ll N_c = 0;
//    for (ll num : set1) {
//        if (set2.count(num)) {
//            N_c++;
//        }
//    }
//
//    return (double)N_c / (double)N_t;
//}
//
//int main() {
//    int n;
//    std::cin >> n;
//    std::vector<std::vector<ll>> v(n);
//    for (int i = 0; i < n; i++) {
//        int m;
//        std::cin >> m;
//        v[i].resize(m);
//        for (int j = 0; j < m; j++) {
//            std::cin >> v[i][j];
//        }
//    }
//
//    int k;
//    std::cin >> k;
//    for (int i = 0; i < k; i++) {
//        int a, b;
//        std::cin >> a >> b;
//        double res = solve(v[a - 1], v[b - 1]);
//        printf("%.2lf", res * 100);
//        std::cout << '%' << std::endl;
//    }
//    return 0;
//}