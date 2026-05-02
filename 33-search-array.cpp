#include <iostream>

int searchArray(int numbers[], int size , int myNum);
int searchFoodArray(std::string foods[], int size2, std::string myFood);

int main(){
    
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::string foods[] = {"Pizza", "Potato", "Hotdog", "Cake"};

    // search through an array of integers
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int myNum, index;

    std::cout << "Enter element to search for in the NUMBERS array: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    if (index != -1){
        std::cout << myNum << " is at index: " << index << '\n' ;
    }
    else{
        std::cout << myNum << " is not in the array \n";
    }

    std::cin.clear();
    fflush(stdin);

    // search array for strings
    int size2 = sizeof(foods)/sizeof(foods[0]);
    int index2;
    std::string myFood;

    std::cout << "Enter element to search for in the FOOD array: ";
    std::cin >> myFood;

    index2 = searchFoodArray(foods, size, myFood);
    if (index2 != -1){
        std::cout << myFood << " is at index: " << index2 ;
    }
    else{
        std::cout << myFood << " is not in the array";
    }


    return 0;
}

int searchArray(int numbers[], int size, int myNum){
    for(int i =0; i < size; i++){
        if(numbers[i] == myNum){
            return i;
        }
    }
    return -1;
}

int searchFoodArray(std::string foods[], int size2, std::string myFood){
    for(int i =0; i < size2; i++){
        if(foods[i] == myFood){
            return i;
        }
    }
    return -1;
}