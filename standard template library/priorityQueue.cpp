#include <iostream>
#include <queue>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(2);
    pq.push(30);
    pq.push(-12);
    pq.push(20);

    if(!pq.empty()){
        cout << " " << pq.top();
        pq.pop();
    }
    else{
        cout << "Empty!" ;
    }

    return 0;
}