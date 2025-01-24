#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int num;
    int tries = 0;
    int guess;

    time_t current_time = time(nullptr);

    num = (rand() % 100) + 1;

    cout << "*******NUMBER GUESSING GAME********\n";

    do
    {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;


        if (guess > num)
        {
            cout << "Too HIGH\n";
        }
        
        else if (guess < num)
        {
            cout << "Too LOW\n";
        }

        else{
            cout << "CORRECT!\n" << "Number of tries: " << tries;
        }

    } while (guess != num);
    
    return 0;
}