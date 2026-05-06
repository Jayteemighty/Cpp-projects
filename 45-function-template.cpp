#include <iostream>
template <typename T, typename U> // declare template, this one receives 2 typename

auto max(T x, U y){ // auto helps to detect data type automatically
    return(x > y) ? x : y;
}

int main(){
    // function template = describes what a function looks like.
    //                     Can be used to generate as many overloaded 
    //                     functions as needed, each using different data   
    //                     types

    std::cout << max(1.1, 2) << '\n';

    return 0;
}
