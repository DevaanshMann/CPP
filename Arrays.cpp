#include<iostream>

using namespace std;

int main(){

    // string car = "Range Rover";       it is a variable holding a value
    // cout << car;

    // Array declaration
    string car[] = {"Range Rover", "G-Wagon", "Brabus"};        // Array holding value

    car[0] = "Mustang";

    cout << car[0] << '\n';
    cout << car[1] << '\n';
    cout << car[2] << '\n';

    /*Another way of array declaration
    
    string car[3];

    car[0] = "Range Rover";
    car[1] = "G-Wagon";
    car[2] = "Brabus";

    cout << car[0] << '\n';
    cout << car[1] << '\n';
    cout << car[2] << '\n';

    */

    return 0;
}

/*

Arrays: a data structure which can hold multiple values.
        values can be accessed using an index number
        kind of like a variable that holds multiple values.
        Arrays must be of the same data type.
        it is a static data structure. It can hold only a defined number of values
*/