#include <iostream>

int main(){

    // implicit
    // double x = 3.14;


    // Explicit
    // int x = (double) 3.14;


    // char x = 100;       // gives the ascii value of 100 in char

    // below, we can use cout statement to get the value too
    // std::cout << (char) 100;


    // std::cout << x;

    // Find out the score for a student in the exam in percentage.

    int correct = 8;
    int questions = 10;
    // double score = correct/questions * 100;                // gives 0% in output, as we are doing integer division. So we need to convert type.
    double score = correct/(double) questions * 100;

    std::cout << score << "%";

    return 0;
}