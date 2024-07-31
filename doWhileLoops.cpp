#include <iostream>

using namespace std;

int main (){

    int number;

    /*
    regular while loop

    while (number < 0)
    {
        cout << "Enter a positive number: ";
        cin >> number;
    }

    cout << "Number is : " << number;
    
    */

    // Do While Loop : do some block of code first, THEN repeat again if condition is true.

    do
    {
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number < 0);
    
    cout << "Number is : " << number;

    return 0;
}