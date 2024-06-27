#include <iostream>

int main(){

    /*
    
    print statements

    std::cout << x << '\n';
    std::cout << "Hello" << name;

    */


    // int (whole numbers)
    
    int x;         // variable declaration
    x = 5;         // assignment
//  int x = 5;    // both variable declaration and assignment together
    int y = 6;
    int sum = x + y;


    // double (numbers including decimals)
    
    double price = 10.5;
    double gpa = 3.9;

    // single character (can only store one character)

    char grade = 'A';
    char initial = 'B';
//  char initial = 'BC';           this will throw an error as char can only store one charater.
    char currency = '$';

    // boolean (true or false)

    bool student = true;
    bool power = false;
    bool forSale = true;

    // String (objects that represent a sqeuence of text)

    std::string name = "hey";
    std::string day = "friday";
    std::string food = "pizza";
    std::string address = "123 lassen st";


    // std::cout << "Hello" << name;


    return 0;
} 