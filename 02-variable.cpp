#include <iostream>

int main(){
    int x; // Declaration of variable x
    x = 5; // Assignment

    int c = 9; // Not changing, assigned while declaring
    int sum = x + c;

    //integer (whole numbers)
    int age = 25;
    int year = 2025;
    int days = 7;

    //double (for decimal numbers)
    double price = 10.99;
    double temp = 92.5;
    double gpa = 2.86;

    // single character
    char grade = 'A';
    char initial = 'J';
    char dollarsign = '$';

    // Boolean (true or false)
    bool student = true;
    bool power = true;
    bool forSale = false;

    // String
    std::string name = "Joshua";
    std::string day = "Tuesday";
    std::string food = "I look Pounded Yam";
    std::string address = "123 Omowerey street";

    std::cout << x << std::endl; //output
    std::cout << c << '\n';
    std::cout << sum << '\n';

    std::cout << days << '\n';
    std::cout << price << '\n';

    std::cout << grade << '\n';
    std::cout << dollarsign << '\n';

    std::cout << power << '\n';
    std::cout << forSale << '\n';
    std::cout << student << '\n';

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old."<< '\n';
    std::cout << "Your address is " << address << " ,right?" << '\n';

    return 0;
}