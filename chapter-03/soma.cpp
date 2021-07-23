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
    cout << "+a:     " << +a    << endl;  //sinal positivo, se o número for positivo mantém positivo
    cout << "+e:     " << +e    << endl;  //sinal positivo, se o número for negativo mantém negativo
    cout << "a++:    " << a++   << endl;  //recupera e depois incrementa 1
    cout << "++a:    " << ++a   << endl;  //incrementa 1 e depois recupera
    a += b;
    cout << "a += b: " << a     << endl;  //incrementa a com b: equivalente a = a + b
    cout << "a + b:  " << a + b << endl;  //resultado de a + b
    a += c;
    cout << "a += c: " << a     << endl;  //incrementa a com c (float): a fração do float é ignorada
    cout << "a + c:  " << a + c << endl;  //resultado a + c (float): o resultado é um float
    cout << endl;

    cout << "PONTO FLUTUANTE"   << endl;
    cout << "+c:     " << +c    << endl;
    cout << "c++:    " << c++   << endl;
    cout << "++c:    " << ++c   << endl;
    c += d;
    cout << "c += d: " << c     << endl;
    cout << "c + d:  " << c + d << endl;
    c += b;
    cout << "c += b: " << c     << endl;
    cout << "c + b:  " << c + b << endl;
    cout << endl;

    return 0;
}