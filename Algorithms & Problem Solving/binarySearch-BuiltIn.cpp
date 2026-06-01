#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // Using built-in binary search function
    // Time Complexity: O(log n)

    // int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78, 89, 99};
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78, 89, 99};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int target;

    cout << "Enter the target to search for in the array: ";
    cin >> target;

    bool found = binary_search(arr.begin(), arr.end(), target);

    if(found){
        cout << "Target " << target << " was found in the array." << '\n';
    }
    else{
        cout << "Target " << target << " was not found in the array." << '\n';
    }
    return 0;
}
