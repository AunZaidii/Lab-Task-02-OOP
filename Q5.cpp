#include<iostream>
#include<conio.h>
using namespace std;
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 02: Q5\n"<<endl;

 int number;
cout<<"Enter the number: ";
cin>>number;
cout<<"Multiplication Table of " << number << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << number << " * " << i << " = " << (number * i) << endl;}
    return 0;
}
