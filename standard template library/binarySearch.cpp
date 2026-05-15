#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> v1 = {1,2,3,4,5,46,755,55,5,8,9};

    // binary_search(start_position, end_position, element)
    // Binary Search only works if input is sorted
    sort(v1.begin(), v1.end()+1);

    if(binary_search(v.begin(), v.end(), 3)){
        cout << "found";
    }
    else{
        cout << "Not Found";
    }

    // search arr
    int arr[10] = {1,2,3,4,5};
    if(binary_search(arr, arr+5, 4)){
        cout << "Found";
    }
    else{
        cout << "Not found";
    }

    return 0;
}
