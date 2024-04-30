#include<iostream>
using namespace std;
int main(){

cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 02: Q4\n"<<endl;

    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int n;
    cout<<"Enter the shifting value: ";
    cin>>n;
    string encrypt ="";
    for(int i=0 ;i<str.length();i++){
        if(str[i]==' ') encrypt+=' ';
        else if ((int)str[i]>=97 and (int)str[i]<=(122-n)) encrypt+=char((int)str[i]+n);
        else if ((int)str[i]>=65 and (int)str[i]<=(90-n)) encrypt+=char((int)str[i]+n);
        else encrypt+=char((int)str[i]+n-26);}
    cout<<"The encrypted text is "<<encrypt;
}