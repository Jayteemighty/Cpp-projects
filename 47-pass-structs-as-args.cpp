#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main(){
    Car car1;

    car1.model = "Mustang";
    car1.year = 2016;
    car1.color = "red";

    Car car2;

    car2.model = "Range Rover";
    car2.year = 2026;
    car2.color = "blue";

    paintCar(car1, "orange");
    paintCar(car2, "lilac");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color){
    car.color = color;
}
