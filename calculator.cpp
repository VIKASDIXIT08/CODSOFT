#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

     cout << "Enter two numbers: ";
    cin >> num1 >> num2;

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
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operation!";
            return 0;
    }

    cout << "Result: " << result << endl;
    return 0;
}
