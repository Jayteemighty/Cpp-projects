#include <iostream>

int main(){
    // cout << (insertion operator)
    // cin >> (extraction operator)

    std::string name;
    std::string fullname;
    int age;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "What is your full name?: ";
    std::getline(std::cin, fullname);

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "Your fullname is " << fullname << '\n';
    std::cout << "You are " << age << " years old!";

    return 0;
}