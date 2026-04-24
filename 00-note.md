std - standard
cout - c out
end line with ;
command for c++ = g++ file.cpp -o file.exe -static

output is std::cout << whatever ;

comment code using // 
/*
    This is also a comment in cpp
*/

VARIABLES:
there are two ways to declare a variable in cpp
1. Declaration
2. Assignment

int data type only stores a whole number.
e.g int age = 100;

double is used for numbers that has decimals
e.g double price = 8.99;

char is used for single character
e.g char initial = 'O';

boolean is used to store true or false 
e.g bool mad = true;

string (collection of text or numbers in '')
e.g std::string name = 'Adesina'

The const keyword specifies that a variable's value is constant tells the compiler to prevent anything from modifying it (read-only)

NAMESPACES  = provides a solution for preventing name conflicts in large projects. Each entity needs a unique name
A namespace allows for identically named entities as long as the namespaces are different
e.g namespace first{
    int x= 9;
}

namespace second{
    int x = 2;
}

std::cout << first::x;
:: is the scope resolution operator


Arithmetic operators = return the result of specific arithmetic operation (+, -, *, /)

Type conversion = conversion of value of one data type to another        Implicit = automatic
Explicit = Precede value with new data type(int)

cout << (insertion operator)
cin >> (extraction operator)


