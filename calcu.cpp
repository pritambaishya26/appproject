#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;


    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
            
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
            
        case '/':
        
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
            
        default:
            
            cout << "Error! You entered an invalid operator." << endl;
            break;
    }

    return 0;
}