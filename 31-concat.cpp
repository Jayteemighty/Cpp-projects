#include <iostream>
using namespace std;

string concatStrings(string string1, string string2);

int main(){
    string firstName, lastName;

    cout<< "Enter your firstName: ";
    cin >> firstName;

    cout << "Enter your lastName: ";
    cin >> lastName;

    string fullName = concatStrings(firstName, lastName);
    cout << "Your fullname is " << fullName ;



    return 0;
}

string concatStrings(string string1, string string2){
    return string1 + " " + string2;
}