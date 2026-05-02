#include <iostream>

void swapName(std::string &firstName, std::string &middleName);
void swap(std::string firstName, std::string middleName);

int main(){
    // difference between passby value and passby reference
    // passby value creates a copy of the original
    // passby reference use the memory address of the original

    std::string firstName = "Josh";
    std::string middleName = "Tolu";

    swap(firstName, middleName);
    std::cout << "firstName2: " << firstName << '\n';
    std::cout << "middleName2: " << middleName << '\n';

    swapName(firstName, middleName);
    std::cout << "firstName: " << firstName << '\n';
    std::cout << "middleName: " << middleName << '\n';

    return 0;
}

// pass by reference
void swapName(std::string &firstName, std::string &middleName){
    std::string temp;

    temp = firstName;
    firstName = middleName;
    middleName = temp;
}

// pass by value = won't work because it just uses a copy in the function
void swap(std::string firstName, std::string middleName){
    std::string temp;

    temp = firstName;
    firstName =middleName;
    middleName = temp;
}