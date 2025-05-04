#include"test.h"
//int main() {
//    int p1, p2, p3;
//    string s;
//    cin >> p1 >> p2 >> p3 >> s;
//    for (int i = 0; i < s.size(); i++) {
//        if (i >= 2 && ((islower(s[i]) && islower(s[i - 2])) || (isdigit(s[i - 2]) && isdigit(s[i]))) && s[i - 1] == '-') {
//            if (s[i] > s[i - 2]) {
//                string temp;
//                for (char a = s[i - 2] + 1; a < s[i]; a++) {
//                    for (int j = 0; j < p2; j++)
//                        temp += a;
//                }
//                if (p3 == 2) reverse(temp.begin(), temp.end());
//                s.erase(s.begin() + i - 1);
//                s.insert(i - 1, temp);
//            }
//        }
//
//    }
//    cout << s;
//    return 0;
//}


//set<int> st;
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//    int n; cin >> n;
//    for (int i = 0; i < n; i++) {
//        int data; cin >> data;
//        st.insert(data);
//    }
//    cout << st.size() << endl;
//    for (int i=0;i<st.size();i++) {
//        cout << st[i] <<" \n"[i==st.size()-1];
//    }
//    return 0;
//}


//struct Peo {
//    int id;
//    string s;
//    int size;
//};
//bool compare(const Peo& p1, const Peo& p2) {
//    if (p1.size == p2.size)
//        return p1.s > p2.s;
//    else return p1.size > p2.size;
//}
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
//    int n; cin >> n;
//    vector<Peo> p(n);
//    for (int i = 0; i < n; i++) {
//        p[i].id = i + 1;
//        cin >> p[i].s;
//        p[i].size = p[i].s.size();
//    }
//    sort(p.begin(), p.end(), compare);
//    cout << p[0].id << endl << p[0].s;
//    return 0;
//}