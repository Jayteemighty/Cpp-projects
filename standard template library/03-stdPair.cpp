#include <iostream>
#include <utility>
using namespace std;

// pair<type1, type2> pair_name;
// pair<int, string> p;

int main(){
    pair<int, string> p1(23, "Omowerey");

    pair<int, string> p2;
    p2 = make_pair(12, "jenny"); // create a pair

    auto p3= make_pair("Joshua", 'J');

    pair<int, string> p4(p1);

    pair<bool, string> p6;
    p6.first = true;
    p6.second = "Ankit";

    pair<int, string> p7(25, "Joshua");
    pair<int, string> p8(29, "Tolulope");
    p7.swap(p8);

    cout << "first pair of p1: " << p1.first << '\n';
    cout << "second pair of p1: " << p1.second << '\n';

    cout << p2.first << " & " << p2.second << '\n';

    cout << p3.first << " & " << p3.second << '\n';

    cout << "first pair of p6: " << p6.first << '\n';
    cout << "second pair of p6: " << p6.second << '\n';

    cout << "values of P7: " << p7.first << " & " << p7.second << '\n';
    cout << "values of p8: " << p8.first << " & " << p8.second << '\n';

    cout << (p1 == p2) << endl; // return boolean, checks if p1 is equal to p2
    return 0;
}