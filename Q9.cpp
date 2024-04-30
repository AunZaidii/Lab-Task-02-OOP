#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<< "Start of Lab 02: Q9\n"<<endl;
    char choice;
    char computerChoice;
    srand(time(0));  
    do {
        cout << "Choose (R)ock, (P)aper, (S)cissors, or (Q)uit: ";
        cin >> choice;
        choice = toupper(choice);
        if (choice == 'Q') {
            cout << "Goodbye!" << endl;
            break;}
        int randNum = rand() % 3;
        switch(randNum) {
            case 0:
                computerChoice = 'R';
                cout << "Computer chooses Rock." << endl;
                break;
            case 1:
                computerChoice = 'P';
                cout << "Computer chooses Paper." << endl;
                break;
            case 2:
                computerChoice = 'S';
                cout << "Computer chooses Scissors." << endl;
                break; }
        if (choice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((choice == 'R' && computerChoice == 'S') || 
                   (choice == 'P' && computerChoice == 'R') || 
                   (choice == 'S' && computerChoice == 'P')) {
            cout << "You win!" << endl;
        } else {cout << "Computer wins!" << endl;}       
    } while (choice != 'Q');  
    return 0;
}