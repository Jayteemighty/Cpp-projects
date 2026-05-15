#include <iostream>
#include <valarray>

using namespace std;

int main(){
    valarray<int> va = {1,2,3,4,5};

    cout << "MINIMUM ELEMENT: " << va.min() << endl;
    cout << "MAXIMUM ELEMENT: " << va.max() << endl;
    cout << "SUM: " << va.sum() << '\n';

    // apply to all element in array
    valarray<int> va1;

    va1 = va.apply([](int x){
        return x = x+5;
    });

    cout << "After using APPLY: ";

    for(int i = 0; i < va1.size(); i++){
        cout << " " << va1[i];
    }

    cout << endl;
    
    // Shift elements in array
    va1 = va.cshift(4); // shifts the first n element to the end of the array

    cout << "After using SHIFT: ";

    for(int i=0; i < va1.size(); i++){
        cout << " " << va1[i];
    }

    return 0;
}