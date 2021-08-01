#include <iostream>

using namespace std;

void display(char array[], int arraySize);

int main() {
    char myName[]={'R', 'o', 'd', 'r', 'i', 'g', 'o'};
    display(myName, 7);

    cout << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

void display(char array[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << array[i];
    }
}