#include <iostream>

int main(){
    // Break = break out of a loop
    // continue = skip current iteration

    // break example = basically stops a loop
    for(int i = 1; i <= 20; i++){
        if(i == 17){
            break;
        }
        std::cout << i << '\n';
    }

    // continue example = basically exempts a member in a loop
    for (int i =1; i <= 20; i++){
        if(i == 15){
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}