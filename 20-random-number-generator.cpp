#include <iostream>

int main(){
    // pseudo-random = NOT truly random (but close)

    srand(time(NULL)); // random number generator

    int num = rand(); // invoke rand() function to generate random number

    int num1 = (rand() % 6) + 1; // row a 6 sided dice

    int num2 = (rand() % 20) + 1; // 20 sided dice

    std::cout << num << '\n';
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';

    return 0;
}