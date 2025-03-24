//#include"test.h"
//using namespace std;
//int main() {
//	int n; cin >> n;
//	while (n--) {
//		int k; cin >> k;
//		map<string, int>mp;
//		vector<string> v;
//		for (int i = 1; i <= k; i++) {
//			string col; cin >> col;
//			if (mp.count(col)) mp[col]++;
//			else { mp[col] = 1; v.push_back(col); }
//		}
//		for (auto& col : v) {
//			cout << col << ' ' << mp[col] << endl;
//		}
//	}
//
//	return 0;
//}
//#include"test.h"
//using namespace std;
//struct Record
//{
//    char Type;
//    int Time;
//};
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//    int N; cin >> N;
//    while (N--) {
//        int total_Time = 0, count = 0;
//        map<int, Record>mp;
//        while (true) {
//            int id, hh, mm;
//            char type, colon;
//            cin >> id >> type >> hh >> colon >> mm;
//            if (id == 0) break;
//            int time = hh * 60 + mm;
//            if (type == 'S') {
//                mp[id] = { 'S',time };
//            }
//            else if (type == 'E' && mp.find(id) != mp.end()) {
//                total_Time += time - mp[id].Time;
//                count++;
//                mp.erase(id);
//            }
//        }
//        for (auto& i : mp) {
//            cout << count << ' ' << fixed << setprecision(0) << (double)total_Time / count << endl;
//        }
//    }
//    return 0;
//}
//
// 
// 模拟除法的实现
//#include"test.h"
//using namespace std;
//int q_ggs(int x, int* ws)
//{
//	int ggs = 0;
//	while (ggs < x) {
//		ggs = ggs * 10 + 1;
//		++*ws;
//	}
//	return ggs;
//}
//void bul(int* ggs) {
//	*ggs = *ggs * 10 + 1;
//}
//int main() {
//	int x; cin >> x;
//	int ws = 0;
//	int ggs = q_ggs(x, &ws);;
//	while (ggs % x != 0)
//	{
//		cout << ggs / x;
//		ggs %= x;
//		bul(&ggs);
//		ws++;
//	}
//	cout << ggs / x << ' ' << ws;
//
//	return 0;
//}