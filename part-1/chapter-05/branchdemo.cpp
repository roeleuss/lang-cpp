#include <iostream>

using namespace std;

int main(int numberOfArgs, char* args[]) {
    int arg1;
    cout << "Enter arg1: ";
    cin >> arg1;

    int arg2;
    cout << "Enter arg2: ";
    cin >> arg2;

    if (arg1 > arg2) {
        cout << "Argument 1 is greater than argument 2" << endl;
    } else {
        cout << "Argument 1 is not greater than argument 2" << endl;
    }

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}