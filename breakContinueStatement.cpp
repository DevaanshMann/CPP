#include <iostream>

using namespace std;

int main(){

    //  break = break out of a loop
    //  continue = skip current iteration

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            // break;        // breaks the loop and stops the counting at 12
            continue;      // skips the iteration at 13 and continues the rest of the loop
        }
        
        cout << i << '\n';
    }

    return 0;
}