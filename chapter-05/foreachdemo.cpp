#include <iostream>

using namespace std;

int main(int numberOfArgs, char* args[]) {
    cout << "The primes less than 20 are:" << endl;

    for(int n: {1, 2, 3, 5, 7, 11, 13, 17, 19}) {
        cout << n << ", ";
    }
    cout << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}