#include <iostream>
#include <ctime>

using namespace std;

void task_1() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int number = rand() % 501 - 1;
    cout << "I guessed a number from 1 to 500, try to guess it" << endl;
    int input;
    do {
        cout << "Probably this number - ";
        cin >> input;
        if(input > number) {
            cout << "My number is less" << endl;
        } else if(input < number) {
            cout << "My number is more" << endl;
        } else {
            cout << "You guessed it!" << endl;
        }
    }while(input != number);
}

void task_2() {
    int number, input;
    do {
        cout << "#---------------------- Сurrency converter ----------------------#" << endl;
        cout << "#                       1. USD to UA                             #" << endl;
        cout << "#                       2. EUR to UA                             #" << endl;
        cout << "#                       3. USD to EUR                            #" << endl;
        cout << "#                       0. Exit                                  #" << endl;
        cout << "#----------------------------------------------------------------#" << endl;
        cout << "Enter number: ";
        cin >> number;
        switch (number) {
            case 1: {
                cout << "Enter number of USD: ";
                cin >> input;
                cout << "It`s " << input * 40 << " UA" << endl;
                break;
            }
            case 2: {
                cout << "Enter number of EUR: ";
                cin >> input;
                cout << "It`s " << input * 43<< " UA" << endl;
                break;
            }
            case 3: {
                cout << "Enter number of USD: ";
                cin >> input;
                cout << "It`s " << input * 0.92 << " EUR" << endl;
                break;
            }
            default: {
                cout << "Your number is out of range!" << endl;
                break;
            }
        }
    }while (number != 0);
}

int main() {
    task_2();

    return 0;
}
