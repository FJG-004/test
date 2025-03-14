//////////////#include"test.h"
//////////////int main()
//////////////{
//////////////	int arr[11];
//////////////	int n;
//////////////	cin >> n;
//////////////	double sum = 0;
//////////////	for (int i = 0; i < n; i++)
//////////////	{
//////////////		cin >> arr[i];
//////////////		sum += arr[i];
//////////////	}
//////////////	sort(arr, arr + n);
//////////////	double aver = sum / n;
//////////////	for (int i = 0; i < n; i++) cout << arr[i] <<' ';
//////////////	cout << endl;
//////////////	cout << arr[n - 1] << ' ' << arr[n - 2] << ' ' << arr[n - 3] << endl;
//////////////	cout << "aver:" << aver << endl;
//////////////	cout << "the mid:" << arr[n / 2 - 1] << endl;
//////////////
//////////////	return 0;
//////////////}
////////////
////////////
////////////#include"test.h"
////////////int main()
////////////{
////////////	double r, C, S;
////////////	cin >> r;
////////////	C = 2 * 3.14 * r;
////////////	S = 3.14 * r * r;
////////////	cout << C << endl << S;
////////////
////////////	return 0;
////////////}
//////////
//////////#include"test.h"
//////////const int N = 10;
//////////char ch[N];
//////////int a[N];
//////////int a_t, ch_t;
//////////void Pdd(char c);
//////////int main()
//////////{
//////////	string s;
//////////	cin >> s;
//////////	ch[0] = s[0];
//////////	a[0]++;
//////////	for (int i = 1; i < s.size(); i++) {
//////////		Pdd(s[i]);
//////////	}
//////////	for (int i = 0; i <= ch_t; i++)
//////////	{
//////////		cout << a[i] << ch[i];
//////////	}
//////////
//////////	return 0;
//////////}
//////////void Pdd(char c)
//////////{
//////////	if (c == ch[ch_t]) {
//////////		a[a_t]++;
//////////	}
//////////	else {
//////////		ch[++ch_t] = c;
//////////		a[++a_t]++;
//////////	}
//////////}
////////
////////
////////#include"test.h"
//////////ì³²¨ÄÇÆõÊýÁÐ
////////int fb(int n)
////////{
////////	if (n <= 1) return n;
////////	else return fb(n - 1) + fb(n - 2);
////////}
////////int main()
////////{
////////	int n;
////////	cin >> n;
////////	for (int i = 0; i <= n; i++)
////////	{
////////		cout << fb(i) << " \n"[i == n];
////////	}
////////	return 0;
////////}
//////
//////
//////#include"test.h"
//////bool Su(int a)
//////{
//////	for (int i = 2; i < sqrt(a); i++)
//////	{
//////		if (a % i == 0) return false;
//////	}
//////	return true;
//////}
//////int main()
//////{
//////	ios::sync_with_stdio(0);
//////	cin.tie(0); cout.tie(0);
//////	int n;
//////	cin >> n;
//////	for (int i = 2; i <= n; i++)
//////	{
//////		if (Su(i)) cout << i << " \n"[i == n];
//////	}
//////
//////	return 0;
//////}
////
////#include"test.h"
////int main()
////{
////	ios::sync_with_stdio(0);
////	cin.tie(0); cout.tie(0);
////	int n;
////	cin >> n;
////	int a[10] = { 0,12,213,231,231,1231,4564,4564,5655,56666 };
////	int q;
////	cin >> q;
////	while (q--)
////	{
////		int x; cin >> x;
////		int pos = lower_bound(a + 1, a + 1 + 9, x) - a;
////		if (pos <= n && a[pos] == x) {
////			cout << pos << endl;
////		}
////		else {
////			cout << -1 << endl;
////		}
////	}
////	return 0;
////}
//
//
//#include"test.h"
//const int N = 1e5;
//using ll = long long;
//ll a[N], n, k;
//bool check(ll mid)
//{
//	ll sum = 0, cns = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] > mid) return false;
//		else {
//			if (sum + a[i] <= mid) {
//				sum += a[i];
//			}
//			else {
//				sum = a[i];
//				cns++;
//			}
//		}
//	}
//	return cns <= k;
//}
//void solve()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	ll l = 0, r = 1e14;
//	while (l + 1 != r)
//	{
//		ll mid = (l + r) >> 1;
//		if (check(mid))
//			r = mid;
//		else
//			l = mid;
//	}
//	cout << r << endl;
//}
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	int _;
//	cin >> _;
//	while (_--) {
//		solve();
//	}
//	return 0;
//}