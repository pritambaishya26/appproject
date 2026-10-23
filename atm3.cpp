#include <iostream>
using namespace std;

int main() {
    
    int correctPin = 1234;  
    int enteredPin;
    double balance = 5000.0; 
    int choice;
    double amount;

    cout << "Welcome to the Simple ATM!" << endl;


    cout << "Please enter your 4-digit PIN: ";
    cin >> enteredPin;

    while (enteredPin != correctPin) {
        cout << "Incorrect PIN. Please try again: ";
        cin >> enteredPin;
    }
    
    cout << "\nPIN Accepted. Login Successful!" << endl;

    
    do {
        
        cout << "\n========== ATM MENU ==========" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "==============================" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        
        switch (choice) {
            case 1:
                
                cout << "Your current balance is: Rs. " << balance << endl;
                break;

            case 2:
                
                cout << "Enter the amount to deposit: Rs. ";
                cin >> amount;
                if (amount > 0) {
                    balance = balance + amount;
                    cout << "Rs. " << amount << " deposited successfully!" << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                }
                break;

            case 3:
                
                cout << "Enter the amount to withdraw: Rs. ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Transaction Failed! Insufficient balance." << endl;
                } else if (amount > 0) {
                    balance = balance - amount;
                    cout << "Rs. " << amount << " withdrawn successfully!" << endl;
                } else {
                    cout << "Invalid amount entered." << endl;
                }
                break;

            case 4:
                
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select an option between 1 and 4." << endl;
                break;
        }

    } while (choice != 4);

    return 0;
}