#include<iostream>

using namespace std;

int main(){

    string students[] = {"Phil", "Jay", "Manny"};

    for (size_t i = 0; i < sizeof(students)/sizeof(string); i++)
    {
        cout << students[i] << '\n';
    }
    
    return 0;
}


//  size_t is use instead of int i in order to comparing the unsigned type return of 'sizeof(students)/sizeof(string)'. It eliminates the warning and handles large values safely
//  in this cas both i, and 'sizeof(students)/sizeof(string)' are unsigned.