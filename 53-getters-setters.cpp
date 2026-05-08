#include <iostream>

class Stove{
    private: // hide attribute from outsider of class
        int temp = 0;
    public:
    int getTemp(){ // this is Getter
        return temp;
    }
    void setTemp(int temp){ // this is setter  
        if(temp < 0){
            this -> temp = 0;
        }
        else if(temp >= 10){
            this -> temp = 10;
        }
        else{
            this -> temp =temp; 
        }
    }
};

int main(){
    // Abstraction = hiding unnecessary data from outside a class
    // Getter = function that makes a private attribute READABLE
    // Setter = function that makes a private attribute WRITEABLE

    Stove stove;

    stove.setTemp(10000000);

    std::cout << "The temperature setting is " << stove.getTemp();

    return 0;
}