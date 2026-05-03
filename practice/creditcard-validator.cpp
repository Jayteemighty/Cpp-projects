#include <iostream>
#include <string>
#include <cctype>

int sumOddDigits(const std::string &cardNumber);
int resolveDigit(int digit);
int sumEvenDigits(const std::string &cardNumber);
bool isValidCard(const std::string &cardNumber);

int main(){
    // luhn algorithm
    // 1. Starting from the right, double every second digit
    // 2. If doubling gives a number > 9, subtract 9
    // 3. Add all digits together
    // 4. If total % 10 == 0 → ✅ valid card

    std::string cardNumber;

    std::cout << "======================== \n";
    std::cout << "CREDIT CARD VALIDATOR\n";
    std::cout << "======================== \n";

    std::cout << "Input your Credit card number: \n";

    std::getline(std::cin, cardNumber);

    if(isValidCard(cardNumber)){
        std::cout << cardNumber << " is valid! \n";
    }
    else{
        std::cout << cardNumber << " is not Valid! \n";
    }

    return 0;
}

int sumOddDigits(const std::string &cardNumber){
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i-=2){
        sum += cardNumber[i] - '0';
    }
    return sum;
}

int resolveDigit(int digit){
    if(digit > 9){
        return (digit % 10) + (digit / 10);
    }else{
        return digit;
    }
}

int sumEvenDigits(const std::string &cardNumber){
    int sum = 0;
    int digit;

    for(int i = cardNumber.size() - 2; i>=0; i-=2){
        digit = (cardNumber[i] - '0') * 2;
        sum += resolveDigit(digit);
    }
    return sum;
}

bool isValidCard(const std::string &cardNumber){
    if(cardNumber.empty()){
        return false;
    }

    for(char c : cardNumber){
        if(!isdigit(c)){
            return false;
        }
    }

    int total = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    return (total % 10 == 0);
}
