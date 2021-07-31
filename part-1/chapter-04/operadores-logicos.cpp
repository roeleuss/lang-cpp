#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int c = 2;
    int d = 3;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << endl;

    cout << "eq b == c:    " << (b == c)  << endl;
    cout << "eq a == b:    " << (a == b)  << endl;
    cout << "ne b != a:    " << (b != a)  << endl;
    cout << "ne b != c:    " << (b != c)  << endl;
    cout << "gt b > a:     " << (b > a)   << endl;
    cout << "gt b > c:     " << (b > c)   << endl;
    cout << "lt b < d:     " << (b < d)   << endl;
    cout << "lt b < c:     " << (b < c)   << endl;
    cout << "ge b >= c:    " << (b >= c)  << endl;
    cout << "ge b >= d:    " << (b >= d)  << endl;
    cout << "le b <= c:    " << (b <= c)  << endl;
    cout << "le b <= a:    " << (b <= a)  << endl;
    cout << endl;
    
    cout << "not (b == a): " << !(b == a) << endl;
    cout << "not (b == c): " << !(b == c) << endl;
    cout << endl;

    cout << "and (b != a && b == c): " << (b != a && b == c) << endl;
    cout << "and (b != a && b != c): " << (b != a && b != c) << endl;
    cout << "and (b == a && b == c): " << (b == a && b == c) << endl;
    cout << "and (b == a && b != c): " << (b == a && b != c) << endl;
    cout << endl;
    
    cout << "or (b != a || b == c): " << (b != a || b == c) << endl;
    cout << "or (b != a || b != c): " << (b != a || b != c) << endl;
    cout << "or (b == a || b == c): " << (b == a || b == c) << endl;
    cout << "or (b == a || b != c): " << (b == a || b != c) << endl;
    cout << endl;
}