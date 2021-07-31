#include <iostream>
#include <bitset>

using namespace std;

int main() {
    short a = 0;    
    short b = 15;    
    short c = 240;    
    short d = 255;    

    cout << "a:    " << bitset<8>(a)  << endl;
    cout << "b:    " << bitset<8>(b)  << endl;
    cout << "c:    " << bitset<8>(c)  << endl;
    cout << "d:    " << bitset<8>(d)  << endl;
    cout << endl;
    cout << "~b:   " << bitset<8>(~b)  << endl;
    cout << "b&d:  " << bitset<8>(b&d) << endl;
    cout << "a|b:  " << bitset<8>(a|b) << endl;
    cout << "b^c:  " << bitset<8>(b^c) << endl;
}
