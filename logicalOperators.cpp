#include <iostream>

using namespace std;

int main(){
    
    int temp;
    
    cout << "Enter the temperature: ";
    cin >> temp;

    // if (temp > 0 && temp < 30)               //---Logical AND
    if (temp <= 0 || temp >= 30)                //---Logical OR
    {
        cout << "Temperature is bad" << '\n';
    }
    else
    {
        cout << "Temperature is good" << '\n';
    }

    
    bool sunny = true;                          //---Logical NOT
    
    if (sunny)
    {
        cout << "It is Sunny outside" << '\n';
    }
    else
    {
        cout << "It is Couldy outside" << '\n';
    }
    
    return 0;
}