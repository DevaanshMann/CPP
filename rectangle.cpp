#include <iostream>

using namespace std;

int main(){

// this code implements nested loops and prints a rectangle according to user's input of number of rows, columns, and desired symbol.

    int rows;
    int columns;
    char symbol;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> columns;

    cout << "Enter the symbol: ";
    cin >> symbol;


    for (int i = 1; i <= rows ; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << symbol;
        }
        cout << '\n';
    }

    return 0;
}