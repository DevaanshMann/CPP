#include<iostream>

using namespace std;

int main() {

    double gpa = 2.5;
    string name = "Devaansh Mann";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    cout << sizeof(gpa) << " bytes\n";
    cout << sizeof(name) << " bytes\n";
    cout << sizeof(grade) << " bytes\n";
    cout << sizeof(student) << " bytes\n";
    cout << sizeof(grades) << " bytes\n";

    // find out number of elememts

    cout << sizeof(gpa)/sizeof(double) << " elements\n";
    cout << sizeof(name)/sizeof(string) << " elements\n";
    cout << sizeof(grade)/sizeof(char) << " elements\n";
    cout << sizeof(student)/sizeof(bool) << " elements\n";
    cout << sizeof(grades)/sizeof(char) << " elements\n";

    return 0;
}

/*
sizeOf() - determines the size in bytes of a variable, data type, class, objects, etc.
*/