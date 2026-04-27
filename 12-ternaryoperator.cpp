#include <iostream>

int main(){
    // Ternary operator '?:' = replacement to an if/else statement
    // condition ? expresion1 : expression2;

    // ternary operator for grade
    int grade = 90;
    grade <= 70 ? std::cout << "You failed!"<< '\n' : std::cout << "You passed!" << '\n';

    // check if a number is even or odd
    int number = 3;
    number % 2 == 0 ? std::cout << "This number is an even number!" : std::cout << "This number is an odd number!";

    // using bool in ternary op
    bool hungry = true;
    hungry ? std::cout << "You are hungry!" : std::cout << "You are not hungry!";

    // Input number to check if even or odd?
    int num;
    std::cout << "Input any integer to check EVEN or ODD: ";
    std::cin >> num;

    std::cout << (num % 2 == 0 ? "EVEN" : "ODD");

    return 0;
}