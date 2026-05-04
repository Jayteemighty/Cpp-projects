#include <iostream>

int main(){
    // Pointer = a variable that stores memory address of another variable
    // & = address of an operator(returns something like  0x23442214 hexadecimal)
    // * = deference operator

    std::string name = "Bro";
    int age = 21;
    std::string freePizza[] = {"pizza1", "pizza2", "pizza3", "pizza4"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizza = freePizza;

    std::cout << *pName << '\n'; // returns value stored in the memory address
    std::cout << pName << '\n'; // returns memory address
    std::cout << *pAge << '\n';
    std::cout << *pFreePizza << '\n';
    
    return 0;
}