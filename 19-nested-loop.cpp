#include <iostream>

int main(){
    int rows, columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter the symbol you want to use?: ";
    std::cin >> symbol;

    // nested loop is a fOR loop inside another fOR loop
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol << ' ' ;
        }
        std::cout << '\n';
    }
    return 0;
}