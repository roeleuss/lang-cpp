#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <climits>                      //UINT_MAX dá erro no linux se não incluir está lib

using namespace std;

int main(int numberOfArgs, char* args[]) {
    int celsius;
    cout << "Enter the temperature in Celsius: ";
    cin >> celsius;                     // 'cin >> {var_name}' mantém no buffer carecteres não númericos e o char \n que vai ser capturado no próximo cin.get()
    int factor;
    factor = 212 - 32;

    int fahrenheit;
    fahrenheit = factor * celsius / 100 + 32;

    cout << "Fahrenheit value is: ";
    cout << fahrenheit << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(UINT_MAX, '\n');         // cin.ignore(UINT_MAX, '\n') limpa o buffer para o próximo cin.get()
                                        // porém o buffer não está sendo limpo se entrada iniciar com letras
    cin.get();
    return 0;
}
