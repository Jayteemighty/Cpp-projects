#include <iostream>
using namespace std;

int main(){
    // Selection Sort Algorithm
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)

    int arr[] = {64, 25, 12, 22, 11};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size -1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}