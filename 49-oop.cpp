#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating \n";
        }
        void drink(){
            std::cout << "This person is drinking \n";
        }
        void sleep(){
            std::cout << "This person is sleeping \n";
        }
};

int main(){
    // object oriented programming = A collection of attributes and methods
    //                              They can have characteristics and could 
    //                              perform actions
    //                              can be used to mimic real world items 
    //                              like (phone, book, dog)
    //                              Created from a class which acts as a 
    //                              "blue-print"

    Human human1;

    human1.name = "Josh";
    human1.occupation = "Engineer";
    human1.age = 25;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}
