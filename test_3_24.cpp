//#include<iostream>
////using namespace std;
////int a[] = { 0,31,28,31,30,31,30,31,30,31,30,31 };
////class Day
////{
////public:
////    Day(int newY, int newM, int newD) :year(newY), month(newM), day(newD) {}
////    void leap();
////    void display();
////private:
////    int year, month, day;
////};
////void Day::leap() {
////    if ((a[2] % 4 == 0 && a[2] % 100 != 0) || a[2] % 400 == 0) a[2] = 29;
////    else a[2] = 28;
////}
////void Day::display() {
////    int sum = 0;
////    for (int i = 1; i < month; i++) {
////        sum += a[i];
////    }
////    cout << sum + day << endl;
////}
////int main()
////{
////    int year, month, day;
////    while (true) {
////        cin >> year >> month >> day;
////        Day tem(year, month, day);
////        if (year == 0 && month == 0 && day == 0) break;
////        tem.leap();
////        tem.display();
////    }
////
////    return 0;
////}
//
////#include<iostream>
////using namespace std;
////class Year
////{
////public:
////    Year(int y, int m, int d) :year(y), month(m), day(d) {}
////    bool isleapyear() {
////        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
////    }
////    void display() {
////        if (isleapyear()) cout << "true" << endl;
////        else cout << "no";
////    }
////private:
////    int year;
////    int month;
////    int day;
////};
////int main() {
////    int year, month, day;
////    cin >> year >> month >> day;
////    Year k(year, month, day);
////    k.display();
////
////    return 0;
////}
//
//
//#include<iostream>
//using namespace std;
//class Rectangle {
//private:
//	double length, width;
//public:
//	Rectangle() :length(1), width(1) {}
//	Rectangle(double newW, double newH) :length(newH), width(newW) {}
//	double getArea();
//	double getPerimeter();
//	void display();
//};
//double Rectangle::getArea() {
//	return length * width;
//}
//double Rectangle::getPerimeter() {
//	return 2 * (length + width);
//}
//void Rectangle::display() {
//	cout << getArea() << endl;
//	cout << getPerimeter() << endl;
//}
//int main() {
//	double length, width;
//	cin >> length >> width;
//	Rectangle r(length, width);
//	r.display();
//
//	return 0;
//}