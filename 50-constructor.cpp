#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa){ // this is a constructor
        this -> name = name;
        this -> age = age;
        this -> gpa = gpa;
    }
};

int main(){
    // constructor = special method that is automatically called when 
    //               an object is instantiated. 
    //               Useful for assigning values to attributes as arguments

    Student student1("Spongebob", 25, 3.6);
    Student student2("Patrick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    return 0;
}