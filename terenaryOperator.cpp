#include <iostream>

using namespace std;

int main(){
    
    int grade = 75;

    // using if/else statement

    // if (grade >= 60)
    // {
    //     cout << "You Pass!" << '\n';
    // }
    // else
    // {
    //     cout << "You Fail!" << '\n';
    // }

    // Using Terenary operator (condition? Expression1 : expression2);

    (grade >=60) ? cout << "You Pass!" << '\n' : cout << "You Fail!" << '\n';


    return 0;
}