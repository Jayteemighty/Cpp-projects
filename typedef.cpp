#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;
using decimal_t = double; // we can also use 'using' instead of typedef
using boolean_t = bool;

int main(){
    /*
        Typedef = reserved keyword used to create an additional name (alias) for another data type.
        New identifier for an existing type 
        Helps with readability and reduces typos.
    */

//    pairlist_t pairlist;

    text_t firstName = "Joshua";
    number_t age = 17;
    decimal_t temp = 84.7;
    boolean_t angry = false;

    std::cout << firstName << '\n';
    std::cout << age << '\n';
    std::cout << temp << '\n';
    std::cout << angry << '\n';


    return 0;
}