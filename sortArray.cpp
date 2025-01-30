#include<iostream>

using namespace std; 

void bubbleSort(int array[], int size);

int main() {
    
    // Bubble Sort

    int array[] = {10, 1, 3, 7, 4, 9, 6, 5, 2, 8};
    int size = sizeof(array)/sizeof(array[0]);

    for(int element : array){
        cout << element << " ";
    }
    
    bubbleSort(array, size);
    
    return 0;
}

void bubbleSort(int array[], int size){

    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
        
    }
    
}