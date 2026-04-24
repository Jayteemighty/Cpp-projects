#include <iostream>

int main(){
    /*
        The const keyword specifies that a variable's value is constant 
        tells the compiler to prevent anything from modifying it 
        (read-only)
    */ 

    const double PI = 3.14159; // Variable has to be in capital letters if using const
    const double RADIUS= 10;
    double circumference = 2 * PI * RADIUS;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    int area = WIDTH * HEIGHT;

    std::cout << circumference << " cm."<< '\n';
    std::cout << "The area of the rectangle is " << area << " cm." ; 


    return 0;
}