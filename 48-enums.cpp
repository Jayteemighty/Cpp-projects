#include <iostream>

enum Day {sunday=0, monday=1, tuesday=2, wednesday=3, thursday=4, friday=5, saturday=6};

enum flavor {vanilla, chocolate }; // automatically assigns 0, 1 to them respectively

int main (){
    // enums = a user-defined data type consists 
    //         of paired name-integer constants. 
    //         Great if you have a set of potential options

    Day today = sunday;

    switch(today){
        case sunday: 
            std::cout << "Its Sunday! \n";
            break;
        case monday: 
            std::cout << "Its Monday! \n";
            break;
        case tuesday: 
            std::cout << "Its Tuesday! \n";
            break;
        case wednesday: 
            std::cout << "Its Wednesday! \n";
            break;
        case thursday: 
            std::cout << "Its Thursday! \n";
            break;
        case friday: 
            std::cout << "Its Friday! \n";
            break;
        case saturday: 
            std::cout << "Its Saturday! \n";
            break;           
    }

    return 0;
}