#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    float c = 15.8;
    float d = 24.3;
    int e = -10;

    cout << "int a = 10;"       << endl; 
    cout << "int b = 20;"       << endl;
    cout << "float c = 15.8;"   << endl;
    cout << "float d = 24.3;"   << endl;
    cout << endl;

    cout << "INTEIRO"           << endl;
    cout << "-a:     " << -a    << endl;  //sinal negativo, se o número for positivo vira negativo
    cout << "-e:     " << -e    << endl;  //sinal negativo, se o número for negativo vira positivo
    cout << "a--:    " << a--   << endl;  //recupera e depois subtrai 1
    cout << "--a:    " << --a   << endl;  //subtrai 1 e depois recupera
    a -= b;
    cout << "a -= b: " << a     << endl;  //subtrai b de a: equivalente a = a - b
    cout << "a - b:  " << a - b << endl;  //resultado de a - b
    a -= c;
    cout << "a -= c: " << a     << endl;  //subtrai c de a (float): a fração do float é ignorada
    cout << "a - c:  " << a - c << endl;  //resultado a - c (float): o resultado é um float
    cout << endl;

    cout << "PONTO FLUTUANTE"   << endl;
    cout << "-c:     " << -c    << endl;
    cout << "c--:    " << c--   << endl;
    cout << "--c:    " << --c   << endl;
    c -= d;
    cout << "c -= d: " << c     << endl;
    cout << "c - d:  " << c - d << endl;
    c -= b;
    cout << "c -= b: " << c     << endl;
    cout << "c - b:  " << c - b << endl;
    cout << endl;

    return 0;
}