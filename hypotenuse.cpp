#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double a;
    double b;
    double hypotenuse;
    
    cout << "Enter the side A of the triange = ";
    cin >> a;

    cout << "Enter the side B of the triange = ";
    cin >> b;

    hypotenuse = sqrt(pow(a, 2)+pow (b, 2));
    
    // a = pow(a, 2);
    // b = pow(b, 2);
    // hypotenuse = sqrt(a + b);

    cout << "Hypotenuse = " << hypotenuse << '\n';
    
    return 0;
} 