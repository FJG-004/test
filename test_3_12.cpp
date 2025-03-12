//#include"test.h"
//using namespace std;
//int main()
//{
//    int N;
//    cin >> N;
//    string s;
//    int q[100] = { 7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2 };
//    char find[100] = { '1','0','X','9','8','7','6','5','4','3','2' };
//    int flag1 = 0;//检查是否全部通过
//    int sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> s;
//        int flag2 = 0;//检查数字
//        for (int j = 0; j < s.size() - 1; j++)
//        {
//            if (!isdigit(s[j])) {
//                flag1 = 1;
//                flag2 = 1;
//                break;
//            }
//            sum += (s[j] - '0') * q[j];
//        }
//        if (flag2) continue;
//        sum = (sum / 100) % 11;
//        if (find[sum] != s[s.size() - 1]) cout << s << endl;
//    }
//    if (!flag1) cout << "All passed";
//    return 0;
//}