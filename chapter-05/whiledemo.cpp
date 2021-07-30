#include <iostream>

using namespace std;

int main(int numberOfArgs, char* args[]) {
    int loopCount;
    int initialCount;

    cout << "Enter loop count: ";
    cin >> loopCount;

    initialCount = loopCount;

    while (loopCount-- > 0) {
        cout << "Only " << loopCount << " loops to go" << endl;
    }

    do {
        cout << "Count " << ++loopCount << endl;
    } while (loopCount < initialCount);

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}