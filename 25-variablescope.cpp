#include <iostream>

void printNum();

int myNum = 3; // Global variable

int main(){
    // Local variables are declared inside of a function
    // global variables are declared outside of all functions

    int myNum = 2; // local variable
    std::cout << myNum << '\n';

    printNum();

    return 0;
}

void printNum(){
    int myNum = 1;
    std::cout << ::myNum << '\n'; // use :: to call global scope
    std::cout << myNum << '\n';
}