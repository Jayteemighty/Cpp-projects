#include <iostream>
using namespace std;

int main(){
    // Bubble Sort Algorithm
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)

    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size ; i++){
        for(int j =0; j < size-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "The sorted array is: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}