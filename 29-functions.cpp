#include <iostream>

void happyBirthday(std::string name, int age);

int main(){
    //FUNCTION = a block of reusable code void functionName

    std::string name = "Josh";
    int age = 21;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy birthday to "<< name << '\n';
    std::cout << "Happy birthday to "<< name << '\n';
    std::cout << "You are " << age << " years old!" <<  '\n';
    std::cout << "Happy birthday to "<< name << '\n';
}