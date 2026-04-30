#include <iostream>

int main(){
    // foreach loop = loop that eases the traversal over an 
    //                iterable data set

    std::string people[] = {"Ore", "Ayo", "Jeremiah", "Segun"};

    for(std::string i : people ){
        std::cout << i << ",";
    }

    int grades[] = {91,77,98,90,99,100};

    for(int grade: grades){
        std::cout << grade << '\n';
    }

    return 0;
}