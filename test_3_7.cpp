//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//#include <string>
//#include <vector>
//int Pdd(string s1, string s2);
//void test(string s1, string s2);
//int main()
//{
//    //����
//    string s1, s2;
//    cin >> s1 >> s2;
//
//    //����ʵ��
//    //�ж��Ƿ����
//    int pd = Pdd(s1, s2);
//    if (pd)
//    {
//        test(s1, s2);
//    }
//    else
//    {
//        cout << "Are you kidding me?" << endl;
//    }
//
//    return 0;
//}
//int Pdd(string s1, string s2)
//{
//    vector<char> temp;
//    decltype(s1.size()) flag1 = s1.find(s2[0]);
//    decltype(s1.size()) num_t = flag1;
//
//    for (decltype(s1.size()) i = 0; i < flag1; i++)
//    {
//        temp.push_back(s1[i]);
//    }
//    for (decltype(s1.size()) j = 0; j < s2.size() - 1; j++)
//    {
//        int flag2 = 0;
//        //��s1�в���
//        for (decltype(s1.size()) n1 = flag1 + 1; n1 < s1.size(); n1++)
//        {
//            if (s2[j + 1] == s1[n1])
//            {
//                for (decltype(s1.size()) i = flag1 + 1; i < n1; i++)
//                {
//                    temp.push_back(s1[i]);
//                    num_t++;
//                }
//                flag1 = n1;
//                flag2 = 1;
//                break;
//            }
//        }
//        if (flag2 == 0 && temp[num_t - 1] == s2[j + 1] && num_t > 0)
//        {
//            temp.pop_back();
//            num_t--;
//        }
//        else if (flag2 == 0 && temp[num_t - 1] != s2[j + 1])
//        {
//            return 0;
//        }
//    }
//    return 1;
//
//}
//void test(string s1, string s2)
//{
//    vector<char> temp;
//    decltype(s1.size()) flag1 = s1.find(s2[0]);
//    decltype(s1.size()) num_t = flag1;
//
//    for (decltype(s1.size()) i = 0; i < flag1; i++)
//    {
//        temp.push_back(s1[i]);
//        cout << "1->3" << endl;
//    }
//    cout << "1->2" << endl;
//    for (decltype(s1.size()) j = 0; j < s2.size() - 1; j++)
//    {
//        int flag2 = 0;//����Ƿ��ҵ�
//        //����λ��Ŀ�공�����ĳ���
//        for (decltype(s1.size()) n1 = flag1 + 1; n1 < s1.size(); n1++)
//        {
//            if (s2[j + 1] == s1[n1])//�ҵ���
//            {
//                //��Ŀǰ�ĳ��ᵽдһ��Ŀ���ĳ��ᣬȫ������3�ų���
//                for (decltype(s1.size()) i = flag1 + 1; i < n1; i++)
//                {
//                    temp.push_back(s1[i]);
//                    num_t++;
//                    cout << "1->3" << endl;
//                }
//                flag1 = n1;//�滻����һ��Ŀ�공��
//                cout << "1->2" << endl;//��������2�ų���
//                flag2 = 1;//��ǡ������С�
//                break;
//            }
//        }
//        //���û�У�����2�ų��죨��ǰĿ�공����ߵģ�����û��
//        if (flag2 == 0 && temp[num_t - 1] == s2[j + 1])
//        {
//            temp.pop_back();//��2��������һ���Ƴ�
//            num_t--;
//            cout << "3->2" << endl;
//        }
//
//    }
//
//}

//#include <iostream>
//using namespace std;
//#include <iostream>
//#include <vector>
//int main()
//{
//    int N = 0;
//    cin >> N;
//    vector<int> arr(N);
//    vector<char> str(N - 1);
//    int data = 0;
//    char ch;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> arr[i];
//    }
//    for (int j = 0; j < N - 1; j++)
//    {
//        cin >> str[j];
//    }
//    for (int i = N - 1; i > 0; i--)
//    {
//        if (arr[i - 1] == 0)
//        {
//            cout << "ERROR: " << arr[i] << "/0";
//            return 0;
//        }
//        switch (str[i - 1])
//        {
//        case '+':arr[i - 1] = arr[i - 1] + arr[i];
//            break;
//        case '-':arr[i - 1] = arr[i - 1] - arr[i];
//            break;
//        case '*':arr[i - 1] = arr[i - 1] * arr[i];
//            break;
//        case '/':arr[i - 1] = arr[i - 1] / arr[i];
//            break;
//        }
//    }
//    cout << arr[0] << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int main()
//{
//    int N = 0;
//    cin >> N;
//    int data = 0;
//    string s1;
//    vector<int> arr;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> s1;
//        if (s1 == "Pop")
//        {
//            if (arr.size() > 0)
//            {
//                cout << arr[arr.size() - 1] << endl;
//                arr.pop_back();
//            }
//            else
//            {
//                cout << "Invalid" << endl;
//            }
//        }
//        else if (s1 == "PeekMedian")
//        {
//            if (arr.size() > 0)
//            {
//                sort(arr.begin(), arr.end());
//                if (arr.size() % 2 == 0)
//                {
//                    cout << arr[arr.size() / 2] << endl;
//                }
//                else
//                {
//                    cout << arr[(arr.size() + 1) / 2] << endl;
//                }
//            }
//            else
//            {
//                cout << "Invalid" << endl;
//            }
//        }
//        else if (s1 == "Push")
//        {
//            cin >> data;
//            arr.push_back(data);
//        }
//    }
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//#include <string>
//
//int main() {
//    int n = 0, m = 0;
//    cin >> n >> m;
//    vector<string> s(n);
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> s[i];
//    }
//
//    for (int i = 0; i < n; ++i)
//    {
//        int num = 0;
//        int flag = 1;
//        for (auto c : s[i])
//        {
//            if (c == 'S')
//            {
//                if (num < m)
//                {
//                    num++;
//                }
//                else
//                {
//                    cout << "NO" << endl;
//                    flag = 0;
//                    break;
//                }
//            }
//            else
//            {
//                if (num > 0)
//                {
//                    num--;
//                }
//                else
//                {
//                    cout << "NO" << endl;
//                    flag = 0;
//                    break;
//                }
//            }
//        }
//        if (num == 0 && flag)
//        {
//            cout << "YES" << endl;
//        }
//        else if (num != 0 && flag)
//        {
//            cout << "NO" << endl;
//        }
//    }
//
//    return 0;
//}