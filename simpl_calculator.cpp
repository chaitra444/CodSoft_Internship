#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    // Display menu
    cout << "Simple Calculator Program" << endl;
    cout << "------------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";

    // Get user's choice
    cin >> choice;

    // Get two numbers from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation based on user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}

// #include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    // Display menu
    cout << "Simple Calculator Program" << endl;
    cout << "------------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";

    // Get user's choice
    cin >> choice;

    // Get two numbers from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation based on user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}
// #include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    // Display menu
    cout << "Simple Calculator Program" << endl;
    cout << "------------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";

    // Get user's choice
    cin >> choice;

    // Get two numbers from user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation based on user's choice
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}
/*
Simple Calculator Program
------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1-4): 1 
Enter two numbers: 3
5
Result: 3 + 5 = 8

Simple Calculator Program
------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1-4): 2
Enter two numbers: 4 8
Result: 4 - 8 = -4

Simple Calculator Program
------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1-4): 3
Enter two numbers: 5 7
Result: 5 * 7 = 35

Simple Calculator Program
------------------------
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice (1-4): 4
Enter two numbers: 5 8
Result: 5 / 8 = 0.625
    */
