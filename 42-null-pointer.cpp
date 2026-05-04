#include <iostream>

int main(){
    // Null value = means it has no value, when a pointer is holding a null value, that pointer is not pointing at anything
    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address was successfully assigned a pointer

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "No address assigned";
    }
    else{
        std::cout << "Address assigned \n";
        std::cout << *pointer ;
    }
    return 0;
}