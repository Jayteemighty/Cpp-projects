#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "*************TEMPERATURE CONVERTER****************\n";
    std::cout << "F = convert to Fahrenheit\n";
    std::cout << "C = convert to Celsius\n";
    std::cout << "What would you like to convert?: ";

    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Please Enter temperature in Celsius to convert to Fahenheit: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter temperature in Fahrenheit to convert to Celsius: ";
        std::cin >> temp;

        temp = (temp -32) / 1.8;
        std::cout << "Temperature is : " << temp << "C \n";
    }
    else{
        std::cout << "Please Enter only C or F \n";
    }

    std::cout << "****************************************************";

    return 0;
}