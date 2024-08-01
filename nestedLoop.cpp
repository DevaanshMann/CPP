#include <iostream>

using namespace std;

int main(){

    // this loop prints the below loop 3 times
    for (int i = 1; i <=3 ; i++)
    {
    
    // the below loop prints numbers 1 through 10
        for (int j = 1; j <= 10; j++)
        {
            cout << j << ' ';
        }

        cout << '\n';

    }

    return 0;
}