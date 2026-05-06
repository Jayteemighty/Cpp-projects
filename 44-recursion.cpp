#include <iostream>

void walk(int steps);
void walkRecursive(int steps);

int main(){
    // recursion = a programming technique where a function 
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iterative vs recursive)

    // advantages = less code and is cleaner
    //              usefull for sorting and searching algorithms

    // disadvantages = uses more memory
    //                 quite slow

    walk(20);
    walkRecursive(10);


    return 0;
}

// Iterative Approach
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "Iteration: You take a step! \n";
    }
}

// Recursive approach
void walkRecursive(int steps){
    if(steps > 0){
        std::cout << "Recursion: You take a step! \n";
        walkRecursive(steps - 1);
    }
}
