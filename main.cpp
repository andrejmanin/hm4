#include <iostream>

using namespace std;

void task_1() {
    int sum = 0;
    for(int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if(a == b || a == c || b == c) {
            sum += 1;
        }
    }
    cout << sum << endl;
}

void task_2() {
    int sum = 0;
    for(int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if(a != b && a != c && b != c) {
            sum += 1;
        }
    }
    cout << sum << endl;
}

void task_3() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string num = to_string(number);
    string new_num = "";

    for (char c : num) {
        if (c != '3' && c != '6') {
            new_num += c;
        }

    }

    cout << "Number after removing: " << new_num << endl;
}

void task_4() {
    int input_number, num_b = 1;
    cout << "Enter a number: ";
    cin >> input_number;

    while(num_b != input_number) {
        if(input_number % (num_b * num_b) == 0 && input_number % (num_b * num_b * num_b) != 0) {
            cout << num_b << " ";
        }
        num_b += 1;
    }
}

void task_5() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int sum = 0;
    string num = to_string(number);
    for(int i = 0; i < num.length(); i++) {
        sum += num[i] - '0';
    }
    sum * sum * sum == number * number ? cout << "Yes" : cout << "No";
}

void task_6() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int a = 1;
    while(a <= number) {
        if( number % a == 0) {
            cout << a << " ";
        }
        a++;
    }
}

void task_7() {
    int num_1, num_2;
    cout << "Enter two numbers: ";
    cin >> num_1 >> num_2;
    int a = 1;
    while(a <= num_1 && a <= num_2) {
        if(num_1 % a == 0 && num_2 % a == 0) {
            cout << a << " ";
        }
        a++;
    }
}

int main() {
    task_7();
    return 0;
}