# include <iostream>

using namespace std;

int main(){

    string name;

    while (name.empty())                 // checks the condition infinitely if its true, it repeats the process
    {
        cout << "Enter you name: ";
        getline(cin, name);
    }
    
    cout << "Hello " << name;


    // Infinite loop example
    
    while (1==1)
    {
        cout << "HELP! I AM STUCK IN AN INFINITE LOOP";
    }
    

    return 0;
}