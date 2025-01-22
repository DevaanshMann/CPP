#include <iostream>
#include <ctime>

using namespace std;

int main(){

    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));           // initialize random variable

    int num = (rand() % 6) + 1;

    cout << "Random number is: " << num;

    return 0;
}
