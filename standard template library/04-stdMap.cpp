#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string,string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string,string>("strawberry", "die Erdeere"));

    for (auto pair: myDictionary){
        cout << pair.first << " - " << pair.second << '\n';
    }

    return 0;
}