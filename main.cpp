#include <iostream>
#include <climits>

using namespace std;

//int main()
//{
//    cout << "Hello world!" << endl;
//    cout << "Bad";
//    return 0;
//    cin.get();
//}

//int stonetolb(int);
//int main()
//{
//    int stone;
//    cout << "Enter the weight in the stone:";
//    cin >> stone;
//    int pounds = stonetolb(stone);
//    cout << stone << "stone = ";
//    cout << pounds << "pounds." << endl;
//    return 0;
//}
//
//int stonetolb(int sts)
//{
//    return sts * 14;
//}
//int main1()
//{
//    cout << "name:Nora" << endl;
//    cout << "addr: xxxx" << endl;
//    cin.get();
//    return 0;
//}

//double ma(double);
//int main2()
//{
//    double s;
//    cout << "please enter:";
//    cin >> s;
//    double m = ma(s);
//    cout << "changed:" << m;
//    return 0;
//}

//double ma(double n)
//{
//    return n * 220;
//}
//void repeat(string);
//void t2();
//int main()
//{
//    string t1 = "Three blind mice";
//    repeat(t1);
//    t2();
//    cin.get();
//    return 0;
//}
//
//void repeat(string t)
//{
//    cout << t << endl;
//    cout << t << endl;
//}
//void t2()
//{
//    string t2 = "See how they run";
//    cout << t2 << endl << t2;
//}
int main()
{
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof(int) << "bytes." << endl;
    cout << "short is " << sizeof n_short << "bytes." << endl;
    cout << "long is " << sizeof n_long << "bytes." << endl;
    cout << "long long is " << sizeof n_llong << "bytes." << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;

    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
