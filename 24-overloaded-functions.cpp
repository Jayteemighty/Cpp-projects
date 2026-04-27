#include <iostream>
using namespace std;

void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);

int main(){
    string topping1, topping2;

    cout << "What kind of topping do you want?: ";
    cin  >> topping1;

    cout << "What other additional topping do you want?: ";
    cin >> topping2;

    bakePizza();
    bakePizza(topping1);
    bakePizza(topping1, topping2);


    return 0;
}

void bakePizza(){
    cout << "This is your pizza\n";
}
void bakePizza(string topping1){
    cout << "This is your " << topping1 << " pizza \n";
}
void bakePizza(string topping1, string topping2){
    cout << "This is your " << topping1 << " and " << topping2 << " pizza\n";
}