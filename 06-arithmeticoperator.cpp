#include <iostream>

int main(){
    // arithmetic operators = return the result of specific
    // arithmetic operation (+, -, *, /)
    // c++ uses BODMAS to resolve arithmetic operation.

    int students = 21;
    students += 3; // same as students = students + 3; 
    //students++; means students = students + 1;

    students -= 1; // same as students = students - 1;
    // students--; means students = students - 1;

    students *= 2; // same as students = students * 2;
    students /= 2; // same as students = students / 2;

    int remainder = students % 3; // modulus operator

    std::cout << remainder << '\n';
    std::cout << students ;

    return 0;
}