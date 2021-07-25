#include <iostream>

using namespace std;

int main(int numberOfArgs, char* args[]) {
    int loopCount;
    cout << "Enter loop count: ";
    cin >> loopCount;

    while (loopCount-- > 0) {
        cout << "Only " << loopCount << " loops to go" << endl;
    }

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}