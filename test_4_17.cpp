////#include "test.h"
////using namespace std;
////const int N = 10;
////string s[N];
////int main() {
////    int n; cin >> n;
////    string p; cin >> p;
////    for (auto& data : p) {
////        if (data == '0') {
////            s[1] += "XXX";
////            s[2] += "X.X";
////            s[3] += "X.X";
////            s[4] += "X.X";
////            s[5] += "XXX";
////        }
////        else if (data = '1') {
////            s[1] += "..X";
////            s[2] += "..X";
////            s[3] += "..X";
////            s[4] += "..X";
////            s[5] += "..X";
////        }
////        else if (data == '2') {
////            s[1] += "XXX";
////            s[2] += "..X";
////            s[3] += "XXX";
////            s[4] += "X..";
////            s[5] += "XXX";
////        }
////        else if (data == '3') {
////            s[1] += "XXX";
////            s[2] += "..X";
////            s[3] += "XXX";
////            s[4] += "..X";
////            s[5] += "XXX";
////        }
////        else if (data == '4') {
////            s[1] += "X.X";
////            s[2] += "X.X";
////            s[3] += "XXX";
////            s[4] += "..X";
////            s[5] += "..X";
////        }
////        else if (data == '5') {
////            s[1] += "XXX";
////            s[2] += "X..";
////            s[3] += "XXX";
////            s[4] += "..X";
////            s[5] += "XXX";
////        }
////        else if (data == '6') {
////            s[1] += "XXX";
////            s[2] += "X..";
////            s[3] += "XXX";
////            s[4] += "X.X";
////            s[5] += "XXX";
////        }
////        else if (data == '7') {
////            s[1] += "XXX";
////            s[2] += "..X";
////            s[3] += "..X";
////            s[4] += "..X";
////            s[5] += "..X";
////        }
////        else if (data == '8') {
////            s[1] += "XXX";
////            s[2] += "X.X";
////            s[3] += "XXX";
////            s[4] += "X.X";
////            s[5] += "XXX";
////        }
////        else if (data == '9') {
////            s[1] += "XXX";
////            s[2] += "X.X";
////            s[3] += "XXX";
////            s[4] += "..X";
////            s[5] += "XXX";
////        }
////    }
////    for (int i = 1; i <= 5; i++) {
////        cout << s[i] << endl;
////    }
////    return 0;
////}
//
////#include <iostream>
////#include <set>
////using namespace std;
////
////int arr[110];
////int ans;
////int v[110];
////
////int main() {
////    int n;
////    cin >> n;
////    for (int i = 1; i <= n; i++) {
////        int data;
////        cin >> data;
////        arr[i] = data;
////    }
////    for (int i = 1; i < n; i++) {
////        for (int j = i + 1; j <= n; j++) {
////            for (int k = 1; k <= n; k++) {
////                if (k != i && k != j && arr[i] + arr[j] == arr[k] && v[k] == 0) {
////                    v[k] = 1;
////                    ans++;
////                }
////            }
////        }
////    }
////    cout << ans;
////    return 0;
////}
//
//#include <iostream>
//#include <set>
//using namespace std;
//
//set<int> st;
//int ans;
//
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        int data;
//        cin >> data;
//        st.insert(data);
//    }
//    // 遍历 set 中的每个元素
//    for (auto num = st.rbegin(); num != st.rend(); ++num) {
//        bool flag = false;
//        // 双指针遍历 set 来寻找满足条件的组合
//        for (auto it = st.begin(); it != st.end(); ++it) {
//            for (auto next = std::next(it); next != st.end(); ++next) {
//                if (*it + *next > *num) {
//                    break;
//                }
//                else if (*it + *next == *num) {
//                    ans++;
//                    flag = true;
//                    break;
//                }
//            }
//            if (flag) break;
//        }
//    }
//    cout << ans;
//    return 0;
//}