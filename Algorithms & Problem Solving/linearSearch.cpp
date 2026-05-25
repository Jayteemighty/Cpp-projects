#include <iostream>
using namespace std;

int main(){
    // This is a simple linear search algorithm 
    // Time complexity = O(n) where n is the number of elements in the array
    
    int arr[] = {5,8,2,7,3};

    int userInput;
    bool found = false;
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Enter value to look for in the array: ";
    cin >> userInput;

    for(int i =0; i < size; i++){
        if (arr[i] == userInput){
            cout << "Value " << userInput << " found at index: " << i << '\n';
            found = true;
            break;
        }
        
    }
    if(!found){
        cout << "Value " << userInput << " not found in the array.\n";
    }
    return 0;
}
