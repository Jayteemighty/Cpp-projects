#include <iostream>
#include <iomanip>
using namespace std;

// show balance, deposit, withdraw
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    int choice;
    double balance = 0;

    do{
        cout << "******************************** \n";
        cout << "Welcome to JT Banking! \n";
        cout << "******************************** \n";
        cout << "1. Show Account Balance \n";
        cout << "2. Deposit Money \n";
        cout << "3. Withdraw Money \n";
        cout << "4. Exit \n";
        cout << "Your choice?: ";
        cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thanks for coming! \n";
                break;
            default:
                cout << "Enter Valid Input 1-3 \n" ;
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}

double deposit(){
    double amount = 0;

    cout << "How much would you like to deposit?: ";
    cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        cout << "That is not a valid amount: \n";
        return 0;
    }
}

double withdraw(double balance){
    double amount = 0;

    cout << "How much would you like to withdraw?: ";
    cin >> amount;

    if(amount > balance){
        cout << "Insufficient funds \n";
        return 0;
    }
    else if(amount < 0){
        cout << "Not a valid amount \n";
        return 0;
    }
    else{
        return amount;
    }
}