#include<iostream>
#include<conio.h>
using namespace std;
int main(){
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 02: Q1\n"<<endl;

char a;
cout<<"Enter any character: ";
cin>>a;

if(a>=65 && a<=90){
    cout<<a<<" is a capital letter";}
else if(a>=97 && a<=122){
    cout<<a<<" is a small letter";}
else if(a>=48 && a<=57){
    cout<<a<<" is a number";}
else{
    cout<<a<<" is a special symbol";}

    return 0;
}

