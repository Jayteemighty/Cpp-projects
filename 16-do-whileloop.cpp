#include <iostream>

int main(){
    // Do while loops = do some block of code first, 
    // THEN repeat again if condition is true

    int number;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while(number < 0);

    std::cout << "The number is " << number << '\n';

    // the argument in the while() must be an integer or a bool
    int money;

    do{
        std::cout << "How much do you owe me fr?: ";
        std::cin >> money;
    } while(money < 12000);

    std::cout << "Amount owed is " << money << '\n';

    return 0;
}