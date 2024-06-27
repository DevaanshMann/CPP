#include <iostream>
#include <vector>
#include <string>

/*

the whole long identification of the typedef can be put into the identifier name at the end. the identifier name ends with a '_t'.
pairlist_t is the new identifier

*/

// OLD WAY

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;


//  NEW WAY

// using pairlist_t = std::vector<std::pair<std::string, int>>;
using text_t = std::string;
using number_t = int;

int main(){

    // pairlist_t pairlist;

    text_t firstName = "Devaansh";
    text_t lastName = "Mann";
    number_t age = 21;


    std::cout << firstName << '\n';
    std::cout << lastName << '\n';
    std::cout << age << '\n';

    return 0;
} 