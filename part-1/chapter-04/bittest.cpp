#include <iostream>

using namespace std;

int main(int numberOfArgs, char* args[]) {    
    cout.unsetf(cout.dec);
    cout.setf(cout.hex);

    int arg1 = 0x78abcdef;
    int arg2 = 0x12345678;

    cout << " arg1 = 0x" <<  arg1 << endl;
    cout << "~arg1 = 0x" << ~arg1 << "\n" << endl;
    cout << " arg2 = 0x" <<  arg2 << endl;
    cout << "~arg2 = 0x" << ~arg2 << "\n" << endl;

    cout << "  0x" << arg1 << "\n"
         << "& 0x" << arg2 << "\n"
         << "  ----------" << "\n"
         << "  0x" << (arg1 & arg2) << "\n"
         << endl;

    cout << "  0x" << arg1 << "\n"
         << "| 0x" << arg2 << "\n"
         << "  ----------" << "\n"
         << "  0x" << (arg1 | arg2) << "\n"
         << endl;

    cout << "  0x" << arg1 << "\n"
         << "^ 0x" << arg2 << "\n"
         << "  ----------" << "\n"
         << "  0x" << (arg1 ^ arg2) << "\n"
         << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}