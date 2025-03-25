//#include <iostream>
//using namespace std;
//class Student {
//private:
//	static int sum;
//
//public:
//	void count_Sum();
//	void display();
//
//};
//int Student::sum;
//void Student::count_Sum(){
//	int score = 0;
//	for (int i = 0; i < 5; i++) {
//		cin >> score;
//		sum += score;
//	}
//}
//void Student::display() {
//	cout << sum << endl << sum / 5;
//}
//int main() {
//	Student std;
//	std.count_Sum();
//	std.display();
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Date {
//public:
//	Date(int newY, int newM, int newD) :year(newY), month(newM), day(newD) {}
//	void display();
//private:
//	int year, month, day;
//};
//void Date::display() {
//	cout << year << '-' << month << '-' << day;
//}
//int main(){
//	int year, month, day;
//	cin >> year >> month >> day;
//	Date da(year, month, day);
//	da.display();
//
//	return 0;
//}

//#include "test.h"
//using namespace std;
//class Student {
//public:
//	Student(string newN, int newO, double newS, string newW) :name(newN), old(newO), score(newS), wish(newW) {}
//	void display();
//private:
//	string name;
//	int old;
//	double score;
//	string wish;
//};
//void Student::display() {
//	cout << "Student Info:" << endl;
//	cout << "Name:" << name<<endl;
//	cout<<"Age:" << old << endl;
//	cout << "Score :" << score << endl;
//	cout << name << "'s Birthday Wish:" << wish;
//}
//int main() {
//	string name; getline(cin, name);
//	int old; cin >> old;
//	double score; cin >> score;
//	string wish; cin >> wish;
//	Student std(name, old, score, wish);
//	std.display();
//	return 0;
//}


//#include"test.h"
//using namespace std;
//class Time {
//public:
//	//委托构造函数
//	Time(int newH, int newM, int newS) :hour(newH), minute(newM), second(newS) {}
//	Time() :Time(10, 50, 10) {}
//private:
//	int hour, minute, second;
//};
//int main() {
//	Time t;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//const int N = 110;
//int a[N][N];
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//    int n; cin >> n;
//    int col = -1, num = 0;
//    for (int i = 1; i <= n; i++) {
//        cin >> num;
//        a[i][0] = num * 10;
//        col = max(col, num * 10);
//    }
//    int pre = 0, count = 0;
//    for (int i = 1; i <= col; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (i > a[i][0]) continue;
//            if (pre == j) count++;
//            a[i][j] = ++count;
//            pre = j;
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        cout << '#' << i;
//        for (int j = 1; j <= col; j++) {
//            if (j % 10 == 1) cout << endl << a[i][j];
//            else cout << ' ' << a[i][j];
//        }
//        cout << endl;
//    }
//
//    return 0;
//}