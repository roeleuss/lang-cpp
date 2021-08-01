#include <iostream>

using namespace std;

int readArray(int array[], int numberOfElements);
int sumArray(int array[], int numberOfElements);
void displayArray(int array[], int numberOfElements);

const int ARRAY_SIZE = 128;

int main() {
    cout << "This program sums values entered by the user" << endl
         << "Terminate the loop by enetering a negative numver" << endl
         << endl;

    int inputValues[ARRAY_SIZE];

    int numberOfValues = readArray(inputValues, ARRAY_SIZE);

    displayArray(inputValues, numberOfValues);

    cout << "The sum is " << sumArray(inputValues, numberOfValues) << endl;

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

int readArray(int array[], int sizeOfArray) {
    int numberOfValues;
    for (numberOfValues = 0; numberOfValues < sizeOfArray; numberOfValues++) {
        int value;
        cout << "Enter next number: ";
        cin >> value;

        if (value < 0) {
            break;
        }

        array[numberOfValues] = value;
    }
    return numberOfValues;
}

void displayArray(int array[], int numberOfElements) {
    cout << "The value of the array is: " << endl;
    for (int i = 0; i < numberOfElements; i++) {
        cout <<  i << ": " << array[i] << endl;
    }
    cout << endl;
}

int sumArray(int array[], int numberOfElements) {
    int accumulator = 0;
    for (int i = 0; i < numberOfElements; i++) {
        accumulator += array[i];
    }
    return accumulator;
}