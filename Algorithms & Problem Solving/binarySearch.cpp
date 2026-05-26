#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }

        if(arr[mid] > target){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}

int main(){
    // Binary Search Algorithm
    // Time Complexity: O(log n)

    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78, 89, 99};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;

    cout << "Enter target to search for in the array: ";
    cin >> target;

    int answer = binarySearch(arr, size, target);

    if(answer != -1){
        cout << "Target " << target << " was found at index: " << answer << '\n';
    }
    else{
        cout << "Target " << target << " was not found in the array. " << '\n';
    }
    return 0;
}