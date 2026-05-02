#include <iostream>

int main(){
    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    const int size = 100;
    std::string foods[size];

    fill(foods, foods + (size/2), "Pounded Yam"); // fill the half array with the word "Pounded yam"

    fill(foods + size/2, foods + size, "Egusi");

    for(std::string food : foods){
        std::cout << food << " ";
    }
    return 0;
}