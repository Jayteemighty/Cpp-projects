#include <iostream>

int main(){
    // dynamic memory = memory that is allocated after the program is already complied & running.
    // use the 'new' operator to allocate memory in the heap rather than the stack.
    // Usefull when we dont know how much memory we will need. makes our programs more flexible, especially when accepting user input.

    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;

    std::cout << "Address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum; // to avoid memory leak

    char *pGrades = NULL;
    int size;

    std::cout << "Enter how many grades you would input: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        do{
        std::cout << "What would you like to input at #" << i+1 <<": ";
        std::cin >> pGrades[i];
        
        pGrades[i] = std::toupper(pGrades[i]);
        }
        while(!isalpha(pGrades[i]));
    }

    std::cout << "Grades: ";
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}