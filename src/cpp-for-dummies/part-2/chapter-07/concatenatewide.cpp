#include <iostream>

using namespace std;

int main() {
    wchar_t string1[260];
    cout << "Enter string #1: ";
    wcin.getline(string1, 128);

    wchar_t string2[128];
    cout << "Enter string #2: ";
    wcin.getline(string2, 128);

    wcsncat(string1, L" - ", 260);
    wcsncat(string1, string2, 260);

    wcout << endl << string1 << endl;

    cout << "Press Enter to continue...";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}