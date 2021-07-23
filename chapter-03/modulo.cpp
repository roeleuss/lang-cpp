#include <iostream>

using namespace std;

int main() {
    int a = 9000;
    int b = 21;
    int c = 5;

    cout << "int a = 9000;"     << endl; 
    cout << "int b = 21;"       << endl;
    cout << "int c = 5;"        << endl;
    cout << endl;

    cout << "INTEIRO"           << endl;
    a %= b;
    cout << "a %= b: "  << a     << endl;  //modulo a por b: equivalente a = a % b
    cout << "a \% c:  " << a % c << endl;  //resultado de a % c
    cout << endl;

    cout << "PONTO FLUTUANTE"   << endl;
    cout << "Não é permitido operação de modulo quando um dos elementos envolvidos for ponto flutuante." << endl;
    cout << endl;

    return 0;
}