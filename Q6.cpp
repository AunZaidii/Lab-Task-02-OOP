#include<iostream>
#include<conio.h>
using namespace std;
int main(){

cout <<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<< "Start of Lab 02: Q6\n"<<endl;

char operation;
    double num1, num2;
    cout << "Simple Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch(operation) {
        case '1':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '2':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '3':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '4':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid input! Please choose a number between 1 and 4." << endl;
    }
    return 0;
}