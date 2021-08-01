#include <iostream>

using namespace std;

int main() {
    int a = 9000;
    int b = 21;
    float c = 250.8;
    float d = 24.3;

    cout << "int a = 9000;"     << endl; 
    cout << "int b = 21;"       << endl;
    cout << "float c = 250.8;"  << endl;
    cout << "float d = 24.3;"   << endl;
    cout << endl;

    cout << "INTEIRO"           << endl;
    a /= b;
    cout << "a /= b: " << a     << endl;  //divide a por b: equivalente a = a / b
    cout << "a / b:  " << a / b << endl;  //resultado de a / b
    a /= c;
    cout << "a /= c: " << a     << endl;  //divide a por c (float): a fração do resultado é ignorada
    cout << "a / c:  " << a / c << endl;  //resultado de a / c (float): o resultado é um float
    cout << endl;

    cout << "PONTO FLUTUANTE"   << endl;
    c /= d;
    cout << "c /= d: " << c     << endl;
    cout << "c / d:  " << c / d << endl;
    c /= b;
    cout << "c /= b: " << c     << endl;
    cout << "c / b:  " << c / b << endl; 
    cout << endl;

    return 0;
}