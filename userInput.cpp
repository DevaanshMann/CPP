#include <iostream>

int main(){
    
    // cout << (insertion operator)
    // cin << (extraction operator)
    // use "Std::getline(std::cin >> std::ws, string name);" if you have spaces in your string or have a newline character before this command (ws is used to eliminate those spaces)


    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin, name);
    
    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';
    
    
    return 0;
}