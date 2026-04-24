#include <iostream>
#include <cmath>

// Hypotenuse Calculator Practice Program
int main(){
    double a;
    double b,c;


    std::cout << "Enter the value of side A: " ;
    std::cin >> a;

    std::cout << "Enter the value of side B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The value of the Hypotenuse is: " << c;

    return 0;
}