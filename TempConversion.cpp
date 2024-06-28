#include <iostream>

using namespace std;

int main(){
    
    double temp;
    char unit;

    cout << "\n*************  TEMPERATURE CONVERTER  **************\n\n";
    
    cout<< "F = Fahrenheit\n";
    cout<< "C = Celcius\n\n";
    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if (unit == 'F' || unit == ' f')
    {
        cout << "\nEnter the temperature in Celcius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "\nTemperature is: " << temp << "F\n\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "\nEnter the temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp-32) / 1.8;
        cout << "\nTemperature is: " << temp << "C\n\n";
    }
    else
    {
        cout << "Select between F and C/n";
    }
    
    
    cout << "************************************************\n\n";
    
    return 0;
}