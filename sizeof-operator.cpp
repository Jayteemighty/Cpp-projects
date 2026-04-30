#include <iostream>

int main(){
    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class, objects etc.

    double amountLeft = 50.00;
    std::cout << sizeof(amountLeft) << " bytes \n";
    std::cout << sizeof(double) << " bytes \n";

    std::string name = "Joshua";
    std::cout << sizeof(name) << " bytes \n";
    std::cout << sizeof(std::string) << " bytes \n";

    char grade = 'A';
    std::cout << sizeof(grade) << " bytes \n";
    std::cout << sizeof(char) << " bytes \n";

    bool student = false;
    std::cout << sizeof(student) << " bytes \n";
    std::cout << sizeof(bool) << " bytes \n";

    std::string foods[] = {"Rice", "Bread", "Beans", "Yam"};
    std::cout << sizeof(foods) << " bytes \n";
    std::cout << sizeof(foods)/sizeof(std::string) << " elements \n";

    return 0;
}