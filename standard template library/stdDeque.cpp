#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> d;

    // declare and initialize a deque with values
    deque<int> d2 = {10,20,30,40,50};

    // add elements to deque from the BACK
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    // add elements to deque from the FRONT
    d.push_front(23);
    d.push_front(22);
    d.push_front(34);
    d.push_front(46);
    d.push_front(51);

    cout << d.front() << endl; // check first element
    cout << d.back() << endl; // check back element

    d.pop_back(); // remove last element
    d.pop_front(); // remove front element

    cout << d.size() << endl;// check size of deque

    // check if deque is empty
    if(d.empty()){
        cout << "Deque is empty!" << '\n';
    }
    else{
        cout << "Deque is not empty!" << '\n';
    }


    // iterate through deque
    for(auto it=d.begin(); it!=d.end(); it++){
        cout << *it << " ";
    }
    // OR
    for(int val : d2){
        cout << val << " ";
    }

    // clear a deque
    d.clear();

    return 0;
}