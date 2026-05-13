#include <iostream>
#include <map>
#include <list>
#include <utility>

using namespace std;

int main(){
    map<string, list<string>> pokedex;

    list<string> pikachuAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"flame thrower", "scary face"};
    list<string> chikoritaAttacks {"razor leaf", "poison powder"};

    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("ChikoritaAttacks", chikoritaAttacks));

    for(auto pair:pokedex){
        cout << pair.first << " - ";
        for(auto attack : pair.second){
            cout << attack << ", ";
        }
        cout << endl;
    }
    for(map<string, list<string>>::iterator it= pokedex.begin(); it!=pokedex.end(); it++){
        cout << (*it).first << " " <<  '\n';
        for(auto attack: (*it).second){
            cout << attack << ", ";
        }
    }
    return 0;
}