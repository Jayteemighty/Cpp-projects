#include <iostream>

int factorial(int num);
int factorial2(int num);

int main(){
    int num;

    std::cout << "Enter a number to find the FACTORIAL: ";
    std::cin >> num;

    factorial(num);
    return 0;
}

// Iteration
int factorial(int num){
    int total = 1;
    for(int i = num; i > 0; i--){
        total *= i;
        std::cout << i << "*";
    }
    std::cout << "Factorial of " << num << " is: " << total;
    return total;
}

// Recursion
int factorial2(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}
