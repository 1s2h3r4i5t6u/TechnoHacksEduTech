#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Basic Calculator!" << endl;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            cout << "Invalid operator. Please enter a valid operator (+, -, *, /)." << endl;
            return 1; // Exit with an error code
    }

    cout << "Result: " << result << endl;

    return 0;
}
