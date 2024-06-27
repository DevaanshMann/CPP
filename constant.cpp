#include <iostream>

int main(){

    // double pi = 3.14159;
    const double PI = 3.14159;              // if using const, then capitalize the name of the constant.
    // PI = 420.847;                        // this will give en error as you cannot change the vale of PI as it is a constant
    double radius = 10;
    double circumference = 2 * PI * radius;

    // std::cout << circumference << "cm" << '\n';

    const int LIGHT_SPEED = 229589703;
    const int WIDTH = 3312;

    
    return 0;
} 