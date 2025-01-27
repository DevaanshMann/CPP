#include<iostream>

using namespace std;

void bakePizza(){
    cout << "Here is your pizza!\n";
}

void bakePizza(string topping_1){
    cout << "Here is your " << topping_1 << " pizza!\n";
}

void bakePizza(string topping_1, string topping_2){
    cout << "Here is your " << topping_1 << " and " << topping_2 << " pizza!\n";
}

int main(){

    // function overloading allows you to define n number of functions with same name but with different parameters.

    // bakePizza();
    // bakePizza("Veggie");
    bakePizza("chicken","mushroom");

    return 0;
}