#include <iostream>
using namespace std;

int main(){
    std::string name;

    cout << "Enter your name: ";
    getline(cin, name); // actually worked, i dont know where it is vscode error for the 'getline'

    // check number of char in string
    if(name.length() > 12){
        cout << "Your name can not be over 12 characters long.\n";
    }
    else{
        cout << "Welcome " << name << '\n';
    }

    // check if string is empty
    if(name.empty()){
        cout << "You didnt enter your name \n";
    }
    else{
        cout << "Not empty. Hello " << name << '\n';
    }

    // .at() = return a character at a given position within a string
    cout << name.at(1) << '\n';

    // .insert() = insert a character at a given position
    cout << name.insert(0, "@") << '\n';

    // .erase() = erase a portion of a string
    cout << name.erase(0, 1) << '\n'; // exclusive of 1 (ending index)

    // .find() = find position of a character
    cout << name.find('j') << '\n'; // use ' ' to check whitespace

    // append()= append a string to another string
    name.append("@gmail.com");
    cout << "Your email is now " << name << '\n';

    // .clear() used to clear string.
    name.clear();
    cout << "Name cleared, Bye!" << name;

    return 0;
}