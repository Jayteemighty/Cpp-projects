#include <iostream>

void sortArray(int array[], int size);

int main(){
    // Bubble Sort (not really efficient sort) = check if element on the left is greater thatn element 
    //               on the right, if so swipe 
    //               then repeat it array is sorted.

    int array[] = {9,4,6,8,2,1,7,10,5,3};
    int size = sizeof(array)/sizeof(array[0]);

    sortArray(array, size);

    for(int element : array){
        std::cout << element << " ";
    }

    return 0;
}

void sortArray(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i; j++){
            if(array[j] > array[j+1]){
                int temp;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}