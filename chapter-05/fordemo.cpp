#include <iostream>

using namespace std;

int main(int numberOfArgs, char* args[]) {
    int loopCount;
    cout << "Enter loop count: ";
    cin >> loopCount;

    for(int i = 1; i<= loopCount; i++) {
        cout << "We've finished " << i << " loops" << endl;
    }

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}