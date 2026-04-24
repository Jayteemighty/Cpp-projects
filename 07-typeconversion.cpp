#include <iostream>

int main(){
    // Type conversion = conversion of value of one data type to another 
    //        Implicit = automatic
    //        Explicit = Precede value with new data type(int)

    double x = (int) 3.14; // convert decimal to integer (explicit)
    char y = 100; // converts 100 to a character (implicit)

    // calculate percentage
    int correct = 6;
    int questions = 10;
    double score = (double)correct/(double)questions * 100; // convert int to double to avoid truncating answer.

    std::cout << score << "%" << '\n';
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << (char) 100;

    return 0;
}