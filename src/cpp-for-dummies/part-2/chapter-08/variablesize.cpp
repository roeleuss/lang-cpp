#include <iostream>

using namespace std;

int main() {
    bool b;
    char c;
    int n;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;

    cout << "sizeof a bool          = " << sizeof b   << endl;
    cout << "sizeof a char          = " << sizeof c   << endl;
    cout << "sizeof a int           = " << sizeof n   << endl;
    cout << "sizeof a long          = " << sizeof l   << endl;
    cout << "sizeof a long long     = " << sizeof ll  << endl;
    cout << "sizeof a float         = " << sizeof f   << endl;
    cout << "sizeof a double        = " << sizeof d   << endl;
    cout << "sizeof a long double   = " << sizeof ld  << endl;

    cout << "Press Enter to continue...";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}