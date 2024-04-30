#include<iostream>
#include<conio.h>
using namespace std;
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 02: Q2\n"<<endl;

int calls;
cout<<"\nEnter no. of calls: ";
cin>>calls;

if(calls<=100) cout<<200;
    else if(calls>100 and calls<=150) cout<<"Your telephone bill is: "<<200+(calls-200)*0.6;
    else if(calls>150 and calls<=200) cout<<"Your telephone bill is: "<<200+(50)*0.6+(calls-150)*0.5;
    else if(calls>200) cout<<"Your telephone bill is: "<<200+(50)*0.6+(50)*0.5+(calls-200)*0.4;
return 0;
}
