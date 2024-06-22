#include <iostream>

using namespace std;

int main(){
    
    char Operator;

    double num1;

    double num2;

    double result;

    cout << "*************CALCULATOR*************" << '\n';

    cout << "Enter the First Number: ";
    cin >> num1;
    cout << '\n';

    cout << "Enter the Second Number: ";
    cin >> num2;
    cout << '\n';

    cout << "Enter the Operator (+ - * /): ";
    cin >> Operator;
    cout << '\n';

    switch (Operator)
    {
    case '+' || 'A':
        result = num1 + num2;
        cout << "Sum is: " << result << '\n';
        cout << '\n';
        break;

    case '-':
        result = num1 - num2;
        cout << "Difference is: " << result << '\n';
        cout << '\n';
        break;
    
    case '*':
        result = num1 * num2;
        cout << "Product is: " << result << '\n';
        cout << '\n';
        break;
    
    case '/':
        result = num1 / num2;
        cout << "Quotient is: " << result << '\n';
        cout << '\n';
        break;

    default:
        cout << "Please select valid operator (+ - * /)" << '\n';
        break;
    }
    cout << "*************************************" << '\n';

    return 0;
}