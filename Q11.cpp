#include<iostream>
#include<conio.h>
using namespace std;

int main() {

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<< "Start of Lab 02: Q11\n"<<endl;
    int rows_no;
    cout << "ENTER NUMBER OF ROWS: ";
    cin >> rows_no;
    for (int i = 1; i <= rows_no; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";}
        for (int j = 1; j <= 2 * (rows_no - i); j++) {
            cout << " "; }
        for (int j = 1; j <= i; j++) {
            cout << "*";}
        cout << endl;  }
    for (int i = rows_no ; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";}
        for (int j = 1; j <= 2 * (rows_no - i); j++) {
            cout << " ";}
        for (int j = 1; j <= i; j++) {
            cout << "*";}
        cout << endl;}   
    return 0;
}






