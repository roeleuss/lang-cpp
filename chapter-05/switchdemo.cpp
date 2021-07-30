#include <iostream>

using namespace std;

int main(int numberOfArgs, char* args[]) {
    int choice;
    
    do {
        cout << "Enter a number 1, 2 or 3: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You've pressed 1..." << endl;
                break;
            case 2:
                cout << "You've pressed 2..." << endl;
                break;
            case 3:
                cout << "You've pressed 3..." << endl;
                break;
            default:
                cout << "You didn't enter a 1, 2 or 3" << endl;
        }

        if (choice >= 1 && choice <= 3) {
            break;
        }
    } while (true);

    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}