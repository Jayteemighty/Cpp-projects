#include <iostream>

int main(){
    std::string temp;
    std::string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i=0; i < size; i++){
        std::cout << "Enter the food you like or 'q' to quit #" << i+1 << ": ";
        std::getline(std::cin, temp);

        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "These are the foods you like: \n";

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << i + 1 << ". " << foods[i] << '\n';
    }

    return 0;
}