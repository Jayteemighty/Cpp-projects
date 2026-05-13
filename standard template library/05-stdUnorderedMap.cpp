#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<int, int> m;

    m.insert({1, 10});
    m.insert({2, 20});
    m.insert({3, 30});
    m.insert({4, 40});
    m.insert({5, 50});

    for(unordered_map<int,int>::iterator it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " - " << (*it).second << '\n';
    }
    auto i = m.find(1); // find using key
    cout << (*i).first << " - " << (*i).second << '\n';

    m.erase(1);
    cout << "After erasing: " << '\n';
    for(unordered_map<int,int>::iterator it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " - " << (*it).second << '\n';
    }

    // m.clear(); // delete everything in map m
    // cout << m.size();

    return 0;
}