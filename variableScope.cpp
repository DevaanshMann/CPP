#include<iostream>

using namespace std;

int myNum = 3; // GLOBAL VARIABLE

void printNum(){    // LOCAL VARIABLE
    int myNum = 2;
    cout << myNum << '\n';
}

int main(){

    int myNum = 1; // LOCAL VARIABLE
    cout << myNum << '\n';

    // printing global variable;
    cout << ::myNum << '\n';

    printNum();

    return 0;
}


    // local variables: variables declared inside a function or a block {}
    // global variables: variables declared outside of all functions.
    // a function will use any local variables first, before resorting to any global variables.
    // avoid using global variables as they pollute the variable namespace.
    // if you want to use the global variable instead, use the "scope resolution operator, ::"