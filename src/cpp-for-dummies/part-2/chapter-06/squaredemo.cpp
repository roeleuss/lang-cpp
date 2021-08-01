#include <iostream>

using namespace std;

void displayExplanation() {
    cout << "This program sums the square of multiple series of numbers." << endl
         << " - Terminate  each sequence  by entering a negative number." << endl
         << " - Terminate the series by entering a sequence with sums equals zero." << endl 
         << endl;
}


double square(double value) {
    return value * value;
}


double sumSquareSequence() {
    double accumulator = 0.0;

    for (;;) {
        double value = 0;
        cout << "Enter next number: ";
        cin >> value;

        if (value < 0) {
            break;
        }

        value = square(value);
        accumulator += value;
    }

    return accumulator;
}

int main() {
    displayExplanation();

    for (;;) {
        cout << "Enter next sequence" << endl;

        double accumulatedValue = sumSquareSequence();

        if (accumulatedValue <= 0.0) {
            break;
        }

        cout << endl << "The total of the values squared is " << accumulatedValue << endl << endl;
    }

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}