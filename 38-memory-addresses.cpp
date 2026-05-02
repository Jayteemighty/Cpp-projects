#include <iostream>

int main(){
    // memory address = a location in memory where data is stored
    // a memory address can be accessed with & (address-of operator)

    std::string name = "Joshua";
    int age = 25;
    bool angry = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &angry << '\n';

    return 0;
}