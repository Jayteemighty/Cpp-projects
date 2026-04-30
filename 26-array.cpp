#include <iostream>

int main(){
    // Array = a data structure that hold multiple values
    //         values are accesed by an index number
    //         kind of like a variable that holds multiple values.

    std::string car[] = {"Camaro", "Range Rover", "Audi", "Lamborghni Urus"}; // can only contain values of the same data type

    car[0] = "Corvette"; // change item at index 0 to corvette
    car[4] = "Mercedes Benz"; // add new item to an array

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[4] << '\n';

    std::string names[3]; // Array
    names[0] = "Joshua";
    names[1] = "Segun";
    names[2] = "Tolulope";
    names[3] = "Judah";

    std::cout << names[0] << '\n';
    std::cout << names[1] << '\n';
    std::cout << names[2] << '\n';
    std::cout << names[3] << '\n';

    return 0;
}