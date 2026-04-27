#include <iostream>
using namespace std;

int main(){
    // number generator

    int num, guess, tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    tries = 0; // initialize tries

    cout << "****************NUMBER GUESSING GAME****************** \n";

    do{
        cout << "Guess a number from 1 to 100: ";
        cin >> guess;
        tries++;

        if(guess < num){
            cout << "Too low! \n";
        }
        else if(guess > num){
            cout << "Too High! \n";
        }
        else{
            cout<< "Correct, No of tries: " << tries<< '\n';
        }
    }while(guess != num);

    cout << "*******************************************************";

    return 0;
}