#include<iostream>
#include<conio.h>
#include <string>
using namespace std;
string getDayOfWeek(int dayNumber);
int main() {
    cout << "Name: Aun Zaidi (SE-23095)" << endl;
    cout << "Start of Lab 02: Q10\n" << endl;
    int dayNumber;
    cout << "Enter the day number (1-7): ";
    cin >> dayNumber;
    string dayOfWeek = getDayOfWeek(dayNumber);
    cout << "The day of the week is: " << dayOfWeek << endl;
    return 0;
}
string getDayOfWeek(int dayNumber) {
    switch(dayNumber) {
        case 1:
            return "Sunday";
        case 2:
            return "Monday";
        case 3:
            return "Tuesday";
        case 4:
            return "Wednesday";
        case 5:
            return "Thursday";
        case 6:
            return "Friday";
        case 7:
            return "Saturday";
        default:
            return "Invalid day number";
    }
}
