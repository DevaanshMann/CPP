#include<iostream>

using namespace std;

void grad(string name){
    cout << name << " is GRADUATING!!!\n";
    cout << name << " is GRADUATING!!!\n";
    cout << name << " is GRADUATING!!!\n";
    cout << name << " is GRADUATING!!!\n";
    cout << name << " is GRADUATING!!!\n";
}

int main(){

    // User defined function : a reusable function which is defined by the user outside the main function to perform a specific task. It can be called by the user at any given point in any other function.
    // define the function before the main function in order to make the code work properly

    string name = "Devaansh";
    grad(name);

    return 0;
}