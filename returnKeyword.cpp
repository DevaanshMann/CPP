#include<iostream>

using namespace std;

// Numbers
double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}


// Strings
string concatString(string firstName, string lastName){
    return firstName + " " + lastName;
}

int main(){

// Numbers
double length = 5.0;
double area = square(length);
double volume = cube(length);

// Strings
string firstName = "Devaansh";
string lastName = "Mann";
string fullName = concatString(firstName, lastName);

cout << "Area: " << area << " cm^2\n";
cout << "Volume: " << volume << " cm^3\n";

cout << "Hello " << fullName;

    return 0;
}