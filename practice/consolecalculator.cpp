#include <iostream>

int main(){
    char op;
    double num1, num2, result;

    std::cout << "************* Console Calculator*************** \n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << num1 << "+" << num2 << "=" << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << "-" << num2 << "=" << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << "*" << num2 << "=" << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << "/" << num2 << "=" << result << '\n';
            break;
        default:
            std::cout << "Please input valid operators"<< '\n';
            break;
    }

    std::cout << "************************************************";



    return 0;
}