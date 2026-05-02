#include <iostream>

void printInfo(const std::string name, const int age);

int main(){
    // const parameter = parameter that is effectively read-only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    std::string name = "Joshua";
    int age = 100;

    printInfo(name, age);

    return 0;
}

// add "const" to the parameter to make it unchangable
void printInfo(const std::string name, const int age){
    std::cout << name << '\n';
    std::cout << age << '\n';
}