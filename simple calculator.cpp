
#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;
    // Input the operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform the calculation based on the chosen operation
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
            // Check if the second number is not zero before performing division
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;  // Exit the program with an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;  // Exit the program successfully
}
