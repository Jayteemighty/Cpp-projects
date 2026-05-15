#include <iostream>

using namespace std;

int main(){
    int a = 27;
    int b = 30;

    swap(a,b);

    int arr1[] = {1,2,4,3,5};
    int arr2[] = {1,2,8,9,0};

    swap(arr1,arr2);

    cout << "a = " << a << '\n';
    cout << "b = " << b << endl;

    for (auto i : arr1){
        cout << "arr1 = " << i << '\n';
    }

    for (auto i : arr2){
        cout << "arr2 = " << i << '\n';
    }

    return 0;
}