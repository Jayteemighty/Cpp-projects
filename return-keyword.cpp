#include <iostream>

double square(double length);
double cube(double length);

int main(){
    // return = return a value back to the spot where you called the encompassing function

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm2 \n";
    std::cout << "Volume: " << volume << "cm3 \n";

    return 0;
}

double square(double length){ // void changes to double because we are returning a double
    return length * length;
}

double cube(double length){
    return length * length * length;
}