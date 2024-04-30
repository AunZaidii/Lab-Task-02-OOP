#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    
cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
cout<<"Start of Lab 02: Q8\n"<<endl;
srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have picked a number between 1 and 100. Try to guess it." << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
        attempts++;
    } while (true);
    return 0;
}
