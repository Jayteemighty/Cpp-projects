#include <iostream>

int main(){
    // If statements = do something if a condition is true.
    // if not, then do not do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!";
    } 
    else if( age < 0){
        std::cout << "You have not been born yet!";
    }
    else{
        std::cout << "You are not old enough to enter!";
    }


    return 0;
}