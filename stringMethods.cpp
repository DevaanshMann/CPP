#include <iostream>

using namespace std;

int main (){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    
    // LENGTH
    
    name.length();                                    // returns the length of the string

    if (name.length () > 12)
    {
        cout << "Your name can't be over 12 characters.\n";
    }
    else
    {
        cout << "Welcome " << name << '\n';
    }
    
    
    // EMPTY

    name.empty();                                     // returns a boolean if the string is empty or not

    if (name.empty())
    {
        cout << "You didn't enter your name";
    }
    else
    {
        cout << "Hello " << name << '\n';
    }

    
    // CLEAR

    name.clear();                                     // clears the string value
    cout << "Hello " << name;
    
    
    // APPEND

    name.append("@gmail.com");                        // appends the string with another string
    cout << "Your username is now: " << name;

    
    // AT
    
    cout << name.at(0);                               // returns a character at a specific index

    
    // INSERT
    
    name.insert(0, "@");                              // adds a character or another string at a specific index
    cout << name;

    
    // FIND
    
    cout << name.find(' ');                           // finds the first index of any character you put in.

    
    // ERASE

    name.erase(0, 3);                                 // erases the characters from the string within the given index
    cout << name;

    return 0;
}