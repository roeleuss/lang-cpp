#include <iostream>

using namespace std;

void display(char array[]);

int main() {
    char myName[]={'R', 'o', 'd', 'r', 'i', 'g', 'o', '\0'};
    display(myName);

    cout << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

void display(char array[]) {
    for (int i = 0; array[i] != '\0'; i++) {
        cout << array[i];
    }
}