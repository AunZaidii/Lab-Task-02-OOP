#include <iostream>
#include<conio.h>
using namespace std;

int code() 
{cout <<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<< "Start of Lab 02: Q3\n"<<endl;}
bool isStrongPassword(const string& password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    if (password.length() < 8) {cout << "Weak password: it should have a minimum length of 8 characters." << endl;
        return false;
    }
    for (char ch : password) {
        if (isupper(ch)) { hasUpper = true;
        } else if (islower(ch)) { hasLower = true;
        } else if (isdigit(ch)) { hasDigit = true;
        } else if (!isalnum(ch)) { hasSpecial = true;}}
    if (!hasUpper) {
        cout << "Weak password: it should contain at least one uppercase letter." << endl;
        return false;}
    if (!hasLower) {
        cout << "Weak password: it should contain at least one lowercase letter." << endl;
        return false;}
    if (!hasDigit) {
        cout << "Weak password: it should contain at least one digit." << endl;
        return false;}
    if (!hasSpecial) {
        cout << "Weak password: it should contain at least one special character." << endl;
        return false;}
    return true;}
int main() {
    code();
    string password;
    cout << "Enter a password: ";
    cin >> password;
    if (isStrongPassword(password)) {
        cout << "Strong password! It meets all the criteria." << endl;}
return 0;}