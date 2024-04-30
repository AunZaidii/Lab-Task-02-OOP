#include<iostream>
#include<conio.h>
using namespace std;
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<< "Start of Lab 02: Q7\n"<<endl;

int no1,no2,sum,num;
no1=0;
no2=1;
cout<<"Enter the number for Fibonacci series: ";
cin>>num;
if(num <= 0){
    cout<<"Enter a number greater than 0";}
else{
cout<<"FIBONACCI SERIES"<<endl;
for(int i=0;i<num;i++){
    sum = no1+no2;
    cout<<no1<<" ";
    no1 = no2;
    no2 =sum;}
}
    return 0;
}
