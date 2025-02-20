#include<iostream>

using namespace std;

int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    cout << "Enter element to search for: ";
    cin >> myNum;

    index = searchArray(numbers, size, myNum);
    
    if (index != -1)
    {
        cout << myNum << " is at index " << index << '\n';
    }
    else
    {
        cout << myNum << " is not in the array" << '\n';
    }

    return 0;
}

int searchArray(int array[], int size, int element){
    
    // Linear Search
    for(int i = 0; i < size; i++){
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}