#include <iostream>

using namespace std;

void displayExplanation(void) {
    cout << "This program sums multiple series of numbers.\n" 
         << "- Terminate each sequence by entering a negative number.\n"
         << "- Terminate the series if sums equals zero.\n" 
         << endl;
 }

int sumSequence(void) {
    int accumulator = 0;
    for (;;) {
        int value = 0;
        cout << "Enter next number: ";
        cin >> value;

        if (value < 0) {
            break;
        }
        accumulator += value;
    }
    return accumulator;
}

int main() {
    displayExplanation();

    for (;;) {
        cout << "Enter the next sequence" << endl;
        int accumulatedValue = sumSequence();

        if (accumulatedValue == 0) {
            break;
        }
        cout << "The total is " << accumulatedValue << endl << endl;
    }

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}