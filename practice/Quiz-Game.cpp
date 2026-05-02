#include <iostream>
using namespace std;

int main(){
    string questions[] = {"1. What year was C++ created?: ",
                          "2. Who invented C++?: ",
                          "3. What is the predecessor of C++?: ",
                          "4. Is C++ object oriented?: "};
    
    string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                          {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                          {"A. C", "B. C++", "C. C--", "D. B++"},
                          {"A. yes", "B. no", "C. Sometimes", "D. never!"}};
    
    char answerKey[] = {'C', 'B', 'A', 'A'};
    char answer;
    int score = 0;

    int size = sizeof(questions)/sizeof(questions[0]);
    int optionSize = sizeof(options[0])/sizeof(options[0][0]);

    cout << "*************************************\n";
    cout << "C++ QUIZ GAME \n";
    cout << "************************************* \n";

    for(int i = 0; i < size; i++){
        cout << "==================================== \n";
        cout << questions[i] << '\n';
        cout << "==================================== \n";

        for(int j =0; j < optionSize; j++){
            cout<< options[i][j] << '\n';
        }

        cin >> answer;
        answer = toupper(answer);

        if(answer == answerKey[i]){
            cout << "CORRECT \n";
            score++;
        }
        else{
            cout << "WRONG \n";
            cout << "ANSWER: " << answerKey[i] << '\n';
        }
    }

    cout << "************************************** \n";
    cout << "RESULTS";
    cout << "************************************** \n";

    cout << "SCORE: " << score << '\n';
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "PERCENT: " << (score)/(double)size * 100 << '\n';

    return 0;
}