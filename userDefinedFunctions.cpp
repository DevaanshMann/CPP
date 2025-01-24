#include<iostream>

using namespace std;

void grad(string name, int date, int month){
    cout << name << " is GRADUATING on " << month << "/" << date << "\n";
    cout << name << " is GRADUATING on " << month << "/" << date << "\n";
    cout << name << " is GRADUATING on " << month << "/" << date << "\n";
    cout << name << " is GRADUATING on " << month << "/" << date << "\n";
    cout << name << " is GRADUATING on " << month << "/" << date << "\n";
}

int main(){

    // User defined function : a reusable code which is defined by the user outside the main function to perform a specific task. It can be called by the user at any given point in any other function.
    // define the function before the main function in order to make the code work properly

    string name = "Devaansh";

    int date = 16;

    int month = 5;

    grad(name, date, month);

    return 0;
}