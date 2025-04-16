////////////#include"test.h"
////////////// 填上你觉得需要的其他头文件
////////////using namespace std;
////////////int main() {
////////////    int T;
////////////    cin >> T;
////////////    if (T == 1) {
////////////        // 粘贴问题 1 的主函数代码，除了 return 0
////////////        cout << "I love Luogu!";
////////////    }
////////////    else if (T == 2) {
////////////        // 粘贴问题 2 的主函数代码，除了 return 0
////////////        cout << 2 + 4 << " " << 10 - 2 - 4;
////////////    }
////////////    else if (T == 3) {
////////////        // 请自行完成问题 3 的代码
////////////        cout << 14 / 4 << endl;
////////////        cout << 14 - 14 % 4 << endl;
////////////        cout << 14 % 4;
////////////    }
////////////    else if (T == 4) {
////////////        // 请自行完成问题 4 的代码
////////////        cout << fixed << setprecision(3) << 500.00 / 3;
////////////    }
////////////    else if (T == 5) {
////////////        // 请自行完成问题 5 的代码
////////////        cout << (260 + 220) / 32;
////////////    }
////////////    else if (T == 6) {
////////////        // 请自行完成问题 6 的代码
////////////        cout << sqrt(6 * 6 + 9 * 9);
////////////    }
////////////    else if (T == 7) {
////////////        // 请自行完成问题 7 的代码
////////////        cout << 110 << endl;
////////////        cout << 90 << endl;
////////////        cout << 0 << endl;
////////////    }
////////////    else if (T == 8) {
////////////        // 请自行完成问题 8 的代码
////////////        cout << 2 * 3.141593 * 5 << endl;
////////////        cout << 3.141593 * 5 * 5 << endl;
////////////        cout << 4 * 3.141593 * 5 * 5 * 5 / 3 << endl;
////////////
////////////    }
////////////    else if (T == 9) {
////////////        // 请自行完成问题 9 的代码
////////////        int num = 1;
////////////        for (int i = 3; i > 0; i--) {
////////////            num = (num + 1) * 2;
////////////        }
////////////        cout << num;
////////////    }
////////////    else if (T == 10) {
////////////        // 请自行完成问题 10 的代码
////////////    }
////////////    else if (T == 11) {
////////////        // 请自行完成问题 11 的代码
////////////    }
////////////    else if (T == 12) {
////////////        // 请自行完成问题 12 的代码
////////////    }
////////////    else if (T == 13) {
////////////        // 请自行完成问题 13 的代码
////////////    }
////////////    else if (T == 14) {
////////////        // 请自行完成问题 14 的代码
////////////    }
////////////    return 0;
////////////}
//////////
//////////#include"test.h"
//////////using namespace std;
//////////int a[8];
//////////int main() {
//////////    int a, b, sum = 0;
//////////    for (int i = 1; i <= 7; i++) {
//////////        cin >> a >> b;
//////////        sum = a + b;
//////////        if (sum > 8) a[i] = sum - 8;
//////////    }
//////////
//////////    int max = -1, res = 0;
//////////    for (int i = 1; i <= 7; i++) {
//////////        if (a[i] == 0) continue;
//////////        if (a[i] > max) { max = a[i]; res = i; }
//////////    }
//////////    cout << res;
//////////    return 0;
//////////}
////////
//////////#include<iostream>
//////////#include<string>
//////////#include<algorithm>
//////////using namespace std;
//////////string Add(const string& num1, const string& num2) {
//////////	int carry = 0;
//////////	int i = num1.size() - 1;
//////////	int j = num2.size() - 1;
//////////	string res;
//////////	
//////////	while (i >= 0 || j >= 0 || carry) {
//////////		int sum = carry;
//////////		if (i >= 0) sum += num1[i--] - '0';
//////////		if (j >= 0) sum += num2[j--] - '0';
//////////		res.push_back(sum % 10 + '0');
//////////		carry = sum / 10;
//////////	}
//////////	reverse(res.begin(), res.end());
//////////	return res;
//////////}
//////////string Subtract(const string& num1, const string& num2) {
//////////	if (num1 == num2) return "0";
//////////	string larger = num1, smaller = num2;
//////////	bool isNegative = false;
//////////	if ((num1.size() < num2.size()) || (num1.size() == num2.size() && num1 < num2)) {
//////////		larger = num2;
//////////		smaller = num1;
//////////		isNegative = true;
//////////	}
//////////
//////////	string res;
//////////	int borrow = 0;
//////////	int i = larger.size() - 1;
//////////	int j = smaller.size() - 1;
//////////	while (i >= 0) {
//////////		int diff = (larger[i] - '0') - borrow;
//////////		if (j >= 0) diff -= (smaller[j] - '0');
//////////		if (diff < 0) {
//////////			diff += 10;
//////////			borrow = 1;
//////////		}
//////////		else borrow = 0;
//////////		res.push_back(diff + '0');
//////////		i--;
//////////		j--;
//////////	}
//////////
//////////	while (res.size() > 1 && res.back() == '0') {
//////////		res.pop_back();
//////////	}
//////////	if (isNegative) res.push_back('-');
//////////	reverse(res.begin(), res.end());
//////////
//////////	return res;
//////////}
//////////int main() {
//////////	string num1 = "1486432354354535435";
//////////	string num2 = "456435434345434545";
//////////
//////////	string Add = Add(num1, num2);
//////////	string sub = Subtract(num1, num2);
//////////	cout << Add << endl;
//////////	cout << sub << endl;
//////////
//////////	return 0;
//////////}
////////
//////////#include<iostream>
//////////#include<string>
//////////#include<algorithm>
//////////using namespace std;
//////////string Add(const string& num1, const string& num2) {
//////////	int i = num1.size() - 1;
//////////	int j = num2.size() - 1;
//////////	int carry = 0;
//////////	string res;
//////////
//////////	while (i >= 0 || j >= 0 || carry) {
//////////		int sum = carry;
//////////		if (i >= 0) sum += num1[i--] - '0';
//////////		if (j >= 0) sum += num2[j--] - '0';
//////////		res.push_back((sum % 10) + '0');
//////////		carry = sum / 10;
//////////	}
//////////
//////////	reverse(res.begin(), res.end());
//////////
//////////	return res;
//////////}
//////////string Subtract(const string& num1, const string& num2) {
//////////	if (num1 == num2) return "0";
//////////	string larger = num1, smaller = num2;
//////////	bool isNegative = false;
//////////	if (num1.size() < num2.size() || (num1.size() == num2.size() && num1 < num2)) {
//////////		larger = num2;
//////////		smaller = num1;
//////////		isNegative = true;
//////////	}
//////////
//////////	int borrow = 0;
//////////	int i = larger.size() - 1;
//////////	int j = smaller.size() - 1;
//////////	string res;
//////////	while (i >= 0) {
//////////		int diff = larger[i] - '0' - borrow;
//////////		if (j >= 0) diff -= smaller[j] - '0';
//////////		if (diff < 0) {
//////////			borrow = 1;
//////////			diff += 10;
//////////		}
//////////		else borrow = 0;
//////////		res.push_back(diff + '0');
//////////		i--;
//////////		j--;
//////////	}
//////////
//////////	while (res.size() > 1 && res.back() == '0') {
//////////		res.pop_back();
//////////	}
//////////	if (isNegative) {
//////////		res.push_back('-');
//////////	}
//////////	reverse(res.begin(), res.end());
//////////
//////////	return res;
//////////}
//////////int main() {
//////////	string num1 = "12";
//////////	string num2 = "48";
//////////
//////////	string add = Add(num1, num2);
//////////	string sub = Subtract(num1, num2);
//////////
//////////	cout << add << endl;
//////////	cout << sub << endl;
//////////	return 0;
//////////}
//////////#include"test.h"
//////////using namespace std;
//////////string Mul(const string& num1, const string& num2) {
//////////	if (num1 == "0" || num2 == "0") return "0";
//////////	int n1 = num1.size();
//////////	int n2 = num2.size();
//////////
//////////	vector<int> res(n1 + n2, 0);
//////////
//////////	for (int i = n1 - 1; i >= 0; i--) {
//////////		for (int j = n2 - 1; j >= 0; j--) {
//////////			int mul = (num1[i] - '0') * (num2[j] - '0');
//////////			int sum = mul + res[i + j + 1];
//////////			res[i + j + 1] = sum % 10;
//////////			res[i + j] += sum / 10;
//////////		}
//////////	}
//////////
//////////	//除去前置0
//////////	string product;
//////////	for (int num : res) {
//////////		if (!(product.empty() && num == 0)) {
//////////			product.push_back(num + '0');
//////////		}
//////////	}
//////////	return product;
//////////}
//////////
//////////
//////////int main() {
//////////	string num1 = "12";
//////////	string num2 = "45";
//////////
//////////	string mul = Mul(num1, num2);
//////////
//////////	cout << mul << endl;
//////////
//////////	return 0;
//////////}
////////
//////////#include"test.h"
//////////using namespace std;
//////////
//////////vector<string> split_sentences(const string& s) {
//////////    vector<string> sentences;
//////////    string current;
//////////    for (char c : s) {
//////////        current += c;
//////////        if (c == '.' || c == '!' || c == '?') {
//////////            sentences.push_back(current);
//////////            current.clear();
//////////        }
//////////    }
//////////    if (!current.empty()) {
//////////        sentences.push_back(current);
//////////    }
//////////    return sentences;
//////////}
//////////
//////////void process_sentence(const string& sentence) {
//////////    vector<int> numbers;
//////////    string current_num;
//////////
//////////    for (char c : sentence) {
//////////        if (isdigit(c)) {
//////////            current_num += c;
//////////        }
//////////        else {
//////////            if (!current_num.empty()) {
//////////                try {
//////////                    numbers.push_back(stoi(current_num));
//////////                }
//////////                catch (...) {
//////////                    // 处理超大数字的情况
//////////                    numbers.push_back(0);
//////////                }
//////////                current_num.clear();
//////////            }
//////////        }
//////////    }
//////////    // 处理末尾可能剩下的数字
//////////    if (!current_num.empty()) {
//////////        try {
//////////            numbers.push_back(stoi(current_num));
//////////        }
//////////        catch (...) {
//////////            numbers.push_back(0);
//////////        }
//////////    }
//////////
//////////    int sum = 0;
//////////    for (int num : numbers) {
//////////        sum += num;
//////////    }
//////////
//////////    cout << numbers.size() << " " << (sum % 2 ? "Odd" : "Even") << endl;
//////////}
//////////
//////////int main() {
//////////    string s;
//////////    getline(cin, s);
//////////
//////////    // 处理空输入的情况
//////////    if (s.empty()) {
//////////        cout << "0 Even" << endl;
//////////        return 0;
//////////    }
//////////
//////////    vector<string> sentences = split_sentences(s);
//////////    for (const string& sentence : sentences) {
//////////        // 跳过空句子
//////////        if (sentence.empty()) continue;
//////////        process_sentence(sentence);
//////////    }
//////////
//////////    return 0;
//////////}
////////
////////
////////#include"test.h"
////////using namespace std;
////////string Add(const string& num1, const string& num2) {
////////	int i = num1.size() - 1;
////////	int j = num2.size() - 1;
////////	int carry = 0;
////////	string res;
////////
////////	while (i >= 0 || j >= 0 || carry) {
////////		int sum = carry;
////////		if (i >= 0) sum += num1[i--] - '0';
////////		if (j >= 0) sum += num2[j--] - '0';
////////		res.push_back(sum % 10 + '0');
////////		carry = sum / 10;
////////	}
////////
////////	reverse(res.begin(), res.end());
////////
////////	return res;
////////}
////////
////////string Subtract(const string& num1, const string& num2) {
////////	if (num1 == num2) return "0";
////////	string larger = num1, smaller = num2;
////////	bool isNegative = false;
////////	if ((num1.size() < num2.size()) || (num1.size() == num2.size() && num1 < num2)) {
////////		larger = num2;
////////		smaller = num1;
////////		isNegative = true;
////////	}
////////
////////	int i = larger.size() - 1;
////////	int j = smaller.size() - 1;
////////	string res;
////////	int borrow = 0;
////////
////////	while (i >= 0) {
////////		int diff = larger[i] - '0' - borrow;
////////		if (j >= 0) diff -= smaller[j] - '0';
////////		if (diff < 0) {
////////			diff += 10;
////////			borrow = 1;
////////		}
////////		else borrow = 0;
////////		res.push_back(diff + '0');
////////		i--;
////////		j--;
////////	}
////////
////////	//去掉前置零
////////	while (res.size() > 1 && res.back() == '0') {
////////		res.pop_back();
////////	}
////////	if (isNegative) {
////////		res += '-';
////////	}
////////
////////	reverse(res.begin(), res.end());
////////
////////	return res;
////////}
////////string Mul(const string& num1, const string& num2) {
////////	if (num1 == "0" || num2 == "0") return "0";
////////	int n1 = num1.size();
////////	int n2 = num2.size();
////////
////////	vector<int> res(n1 + n2, 0);
////////
////////	for (int i = n1 - 1; i >= 0; i--) {
////////		for (int j = n2 - 1; j >= 0; j--) {
////////			int mul = (num1[i] - '0') * (num2[j] - '0');
////////			int sum = mul + res[i + j + 1];
////////			res[i + j + 1] = sum % 10;
////////			res[i + j] += sum / 10;
////////		}
////////	}
////////
////////	string product;
////////	for (int num : res) {
////////		if (!(product.empty() && num == 0)) {
////////			product.push_back(num + '0');
////////		}
////////	}
////////
////////	return product;
////////}
////////int main() {
////////	string num1 = "4565";
////////	string num2 = "4541";
////////
////////	string add = Add(num1, num2);
////////	string sub = Subtract(num1, num2);
////////	string mul = Mul(num1, num2);
////////
////////	cout << add << endl << sub << endl << mul;
////////	return 0;
////////}
//////
////////#include"test.h"
////////using namespace std;
////////int tt = 1;
////////int main() {
////////    string id;
////////    getline(cin, id);
////////    long long sum = 0;
////////    for (auto& c : id) {
////////        if (isdigit(c)) {
////////            sum += (c - '0') * tt;
////////            tt++;
////////        }
////////        if (tt == 10) break;
////////    }
////////    sum %= 11;
////////    if (sum == id.back() - '0') cout << "Right" << endl;
////////    else {
////////        id.pop_back();
////////        if (sum == 10) id.push_back('X');
////////        else id.push_back(sum + '0');
////////        cout << id;
////////    }
////////    return 0;
////////}
//////
//////#include"test.h"
//////using namespace std;
//////int main() {
//////    int n; cin >> n;
//////    int x = 100, k = 1;
//////    long long sum = 0;
//////    while (sum < n) {
//////        sum = 0;
//////        for (int i = 0; i <= 6; i++) {
//////            sum = sum + x + i * k;
//////        }
//////        sum *= 52;
//////        if (sum == n) {
//////            cout << x << endl;
//////            cout << k;
//////            break;
//////        }
//////        if (sum > n) {
//////            if (k == 10) {
//////                x--;
//////                k = 1;
//////            }
//////            else k++;
//////            sum = 0;
//////        }
//////    }
//////    return 0;
//////}
////
////
////#include"test.h"
////using namespace std;
//////整体就是模拟除法的实现
////int q_ggs(int x, int* ws)
////{
////    int ggs = 0;
////    while (ggs < x) {
////        ggs = ggs * 10 + 1;
////        ++*ws;
////    }
////    return ggs;
////}
////void bul(int* ggs) {
////    *ggs = *ggs * 10 + 1;
////}
////int main() {
////    int x; cin >> x;
////    int ws = 0;
////    int ggs = q_ggs(x, &ws);;
////    while (ggs % x != 0)
////    {
////        cout << ggs / x;
////        ggs %= x;//更新余数
////        bul(&ggs);
////        ws++;
////    }
////    cout << ggs / x << ' ' << ws;
////
////    return 0;
////}
//
//
//using namespace std;
//int a[8];
//vector<string> vt(7, " ");
//vector<string> ans(7, " ");
//int sum;
//int main() {
//    int n; cin >> n;
//    for (int i = 0; i < 7; i++) {
//        string s; cin >> s;
//        vt[i] = s;
//    }
//
//    while (n--) {
//        sum = 0;
//        for (int i = 0; i < 7; i++)
//        {
//            string s; cin >> s;
//            ans[i] = s;
//        }
//        for (auto& c : ans) {
//            if (find(vt.begin(), vt.end(), c) != vt.end()) sum++;
//        }
//        cout << sum << endl;
//        a[sum]++;
//    }
//    //for(int i=7;i>=1;i--){
//        //cout<<a[i]<<' ';
//   // }
//    return 0;
//}