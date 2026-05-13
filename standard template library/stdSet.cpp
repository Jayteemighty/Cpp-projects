#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main(){
    set<int> s = {1,2,3,4,5,5,5,4,3,2,1}; // duplicates will be ignored

    set<int, greater<int>> m = {1,2,4,7,8,9,66}; // will be sorted from greater to lesser
    cout << "normal set: ";
    for(auto im : m){
        cout << im << " ";
    }

    cout << '\n';

    // MULTISET
    multiset<int> s2 = {1,2,3,4,5,4,3,1,2}; // duplicates are allowed in multiset
    cout << "multi set: ";
    for(auto ig : s2){
        cout << ig << " ";
    }

    cout << '\n';

    // UNORDERED_SET
    unordered_set<int> s3 = {1,23,54,54,8,9,3,1,3,9,4}; // does not sort but duplicates not allowed still
    cout << "unordered set: ";
    for(auto iu : s3){
        cout << iu << " ";
    }

    cout << '\n';

    // for loop in sets
    for(auto it=s.begin(); it != s.end(); it++){
        cout << *it;
    }

    cout << endl;

    // or use for each loop for sets
    for(auto it:s){
        cout << it;
    }

    cout << '\n';

    cout << s.size(); // no of elements

    cout << '\n';

    // insert into set
    set<int> p;
    p.insert(1);
    p.insert(25);
    p.insert(27);
    p.insert(28);
    p.insert(32);

    for(auto ip = p.begin(); ip != p.end(); ip++){
        cout << *ip << " ";
    }

    cout << '\n';

    // get input from user
    set<int> ages;
    int n;

    cout << "How many elements would you like in the set?: " ;
    cin >> n;

    int val;
    for(int i = 0; i < n; i++){
        cout << "input the # " << i+1 << ": ";
        cin >> val;
        ages.insert(val);
    }
    for(auto age: ages){
        cout << age << " ";
    }

    // clear a set
    s.clear();
    s.size(); // to check if it is cleared

    return 0;
}