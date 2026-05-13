#include <iostream>
#include <queue>

using namespace std;

int main(){
    //  QUEUE = is a container adaptor that follows the FIFO (First-In, First-Out) principle.

    queue<int> q;

    q.push(11); // add element to queue
    q.push(5);
    q.push(4);

    cout << "First element: " << q.front() << '\n'; // check first element
    cout << "back element: " << q.back() << '\n'; // check last element

    cout << q.empty() << endl; // check if queue is empty

    // iterate through queue
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop(); // delete from front of queue
    }

    // use a copy of queue (pseudo traversal)
    queue<int> temp(q);
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }

    
    return 0;
}