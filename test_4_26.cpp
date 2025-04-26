#include"test.h"
////using namespace std;
////char a[110][110];
////char Num(char a[][110], int i, int j) {
////    int sum = 0;
////    if (a[i][j - 1] == '*') sum++;
////    if (a[i + 1][j - 1] == '*')sum++;
////    if (a[i - 1][j - 1] == '*')sum++;
////    if (a[i + 1][j] == '*')sum++;
////    if (a[i - 1][j] == '*')sum++;
////    if (a[i - 1][j + 1] == '*')sum++;
////    if (a[i][j + 1] == '*')sum++;
////    if (a[i + 1][j + 1] == '*')sum++;
////
////    return sum + '0';
////}
////int main() {
////    int n, m;
////    cin >> n >> m;
////    for (int i = 1; i <= n; i++) {
////        for (int j = 1; j <= m; j++) {
////            cin >> a[i][j];
////        }
////    }
////    for (int i = 1; i <= n; i++) {
////        for (int j = 1; j <= m; j++) {
////            if (a[i][j] == '*') {
////                cout << '*';
////                continue;
////            }
////            else {
////                a[i][j] = Num(a, i, j);
////                cout << a[i][j];
////            }
////        }
////        cout << endl;
////    }
////
////    return 0;
////}
//
//
//using namespace std;
//string name[100010];
//int to[100010];
//int tt;
//int main() {
//    int n, m;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        cin >> to[i] >> name[i];
//    }
//    for (int i = 0; i < m; i++) {
//        int a, s;
//        cin >> a >> s;
//        if (a == 0) {
//            if (to[tt] == 0)
//                tt = (tt - s) < 0 ? tt - s + n : tt - s;
//            else {
//                tt = (tt + s) % n;
//            }
//        }
//        else {
//            if (to[tt] == 1)
//                tt = (tt - s) < 0 ? tt - s + n : tt - s;
//            else {
//                tt = (tt + s) % n;
//            }
//        }
//    }
//    cout << name[tt];
//    return 0;
//}




//using namespace std;
//string Mul(string& num1, string& num2) {
//    if (num1 == "0" || num2 == "0") return "0";
//    int n1 = num1.size();
//    int n2 = num2.size();
//    vector<int> vt(n1 + n2, 0);
//
//    for (int i = n1 - 1; i >= 0; i--) {
//        for (int j = n2 - 1; j >= 0; j--) {
//            int mul = (num1[i] - '0') * (num2[j] - '0');
//            int sum = mul + vt[i + j + 1];
//            vt[i + j + 1] = sum % 10;
//            vt[i + j] += sum / 10;
//        }
//    }
//
//    string ans;
//    for (auto& c : vt) {
//        if (!(ans.empty() && c == 0)) {
//            ans.push_back(c + '0');
//        }
//    }
//    return ans;
//}
//int main() {
//    string a, b;
//    cin >> a >> b;
//    string c = Mul(a, b);
//    cout << c;
//    return 0;
//}