#include<iostream>

using namespace std;

int main(){

    /*
            regular for loop to iterate over a data set (array)
            
            string students[] = {"Phil", "Jay", "Manny"};

            for (size_t i = 0; i < sizeof(students)/sizeof(string); i++)
            {
                cout << students[i] << '\n';
            }
    */


    string students[] = {"Phil", "Jay", "Manny", "Gloria"};

    for(string name : students){
        cout << name << '\n';
    }
    return 0;
}

/*
foreach loop - loop that eases the traversal over an iterable data set
*/