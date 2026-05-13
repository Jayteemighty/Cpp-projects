#include <iostream>
#include <stack>

using namespace std;

int main(){
    // STACK = it is a last in first out container (LIFO).

    stack<int> s;

    s.push(1); // add element to stack
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5); // top element (last in)

    // iterate through stack (cant use for loop in stack)
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(0);

    cout << "Size is: " << st.size() << endl; // check no of elements in stack
    cout << "Top element is: " << st.top() << endl; // check top element

    return 0;
}