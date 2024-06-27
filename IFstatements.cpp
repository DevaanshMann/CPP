#include <iostream>

using namespace std;

int main(){
    
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 100)
    {
        cout << "You are too old to enter the site" << '\n';
    }
    
    else if (age >= 18)
    {
        cout << "Welcome to the site" << '\n';
    }
    
    else if (age < 0)
    {
        cout << "You have not been born yet" << '\n';
    }

    else
    {
        cout << "You are not old enough to enter" << '\n';
    }

    return 0;
} 