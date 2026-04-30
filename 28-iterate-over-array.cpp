#include <iostream>

int main(){
    //iterate over an array using FOR LOOP
    std::string students[] = {"Kemi", "Bisi", "Ayo", "Tunde"};

    for(int i =0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }

    // or this = wont affect/show new item added to array
    for(int i =0; i < 4; i++){ 
        std::cout << students[i] << "," ;
    }
    
    return 0;
}