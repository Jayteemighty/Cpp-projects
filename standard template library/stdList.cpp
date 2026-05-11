#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(5);

    myList.erase(myList.begin());

    for(int x : myList){ // for each loop
        cout << x << " " ;
    }

    for(list<int>::iterator it = myList.begin(); it != myList.end(); it++){
        cout << *it << '\n'; // for loop for a list
    }
    
    return 0;
}
