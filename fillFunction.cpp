#include<iostream>

using namespace std;

int main(){

    /*
        longer way

            string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};
    
                for(string food : foods){
                    cout << food << '\n';
                }
    */
    

    //  Using fill() function

    const int size = 100;
    string foods[size];

    fill(foods, foods + (size/2), "pizza");
    fill(foods + (size/2), foods + size, "burger");


    for(string food : foods){
        cout << food << '\n';
    }
    
    return 0;
}


/*
fill() = fills a range of elements with a specified value
        
        fill(begin, end, value)
*/