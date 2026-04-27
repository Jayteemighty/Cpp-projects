#include <iostream>
#include <ctime>

int main(){
    srand(time(0));

    int randNu = (rand() % 5) + 1;

    switch(randNu){
        case 1:
            std::cout << "You win a bumper sticker!\n";
            break;
        case 2:
            std::cout << "You win a Tshirt!\n";
            break;
        case 3:
            std::cout << "You win a Shayo!\n";
            break;
        case 4:
            std::cout << "You win a Olosho!\n";
            break;
        case 5:
            std::cout << "You win a bbl!\n";
            break;
    }

    return 0;
}