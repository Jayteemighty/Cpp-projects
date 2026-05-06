#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main(){
    // struct = A structure that group related variables under one name
    //          structs can contain many different data types 
    //          (string, int, bool, double, char etc)
    //          variables in a struct are known as "members"
    //          members can be access with . "Class Member Access Operation"

    student student1;
    student1.name = "Joshua";
    student1.gpa = 3.00;

    student student2;
    student2.name = "Adesina";
    student2.gpa = 3.95;

    student student3;
    student3.name = "Tolulope";
    student3.gpa = 3.40;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    return 0;
}