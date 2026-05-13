#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, string> myDictionary;

    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string,string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string,string>("strawberry", "die Erdeere"));

    myDictionary["Cherry"] = "zAgbalumo";
    cout << myDictionary.size() <<  '\n';
    //myDictionary.clear(); // delete myDictionary

    for (auto pair: myDictionary){
        cout << pair.first << " - " << pair.second << '\n';
    }

    return 0;
}