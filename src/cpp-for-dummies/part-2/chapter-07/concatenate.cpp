#include <iostream>

using namespace std;

void concatString(char target[], const char source[]);

int main() {
    char string1[256];
    cout << "Enter string #1: ";
    cin.getline(string1, 128);

    char string2[128];
    cout << "Enter string #2: ";
    cin.getline(string2, 128);

    concatString(string1, " - ");
    concatString(string1, string2);

    cout << endl << string1 << endl;

    cout << "Press Enter to continue...";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

void concatString(char target[], const char source[]) {
    int targetIndex = 0;
    while (target[targetIndex]) {
        targetIndex++;
    }

    int sourceIndex = 0;
    while(source[sourceIndex]) {
        target[targetIndex] = source[sourceIndex];
        sourceIndex++;
        targetIndex++;
    }

    target[targetIndex] = '\0';
}