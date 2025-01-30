#include<iostream>

using namespace std;

double getTotal(double prices[], int size);

int main(){

    double prices[] = {49.99, 15.05, 77, 8.98};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    cout << "$" << total << '\n';

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
    
}