#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    
    double z, v, d, e, f, g, h, k;

    z = std::max(x, y); // return the greater of two values
    v = std::min(x, y); // returns the lesser of two values
    d = pow(2, 3); // returns 2 to the power of 3 (x raise to power y)
    e = sqrt(8); // square root of x
    f = abs(-3); // Absolute value
    g = round (9.4); // round up
    h = ceil(3.12); // round to the ceiling
    k = floor(5.78); // round to the floor

    std::cout << z << '\n';
    std::cout << v << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';
    std::cout << f << '\n';
    std::cout << g << '\n';
    std::cout << h << '\n';
    std::cout << k << '\n';

    return 0;
}