#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void inputTemp(vector<float> &tempReadings){
    float temp;
    cout << "Enter temperature reading (or -1 to stop): ";
    while (cin >> temp && temp != -1) {
        tempReadings.push_back(temp);
        cout << "Enter temperature reading (or -1 to stop): ";
    }
}

void addTemp(vector<float> &tempReadings){
    float temp;
    cout << "Please Enter a new temperature reading: ";
    cin >> temp;
    tempReadings.push_back(temp);
    cout << "Added " << temp << " to the readings.";
}

void showTempReadings(const vector<float>& tempReadings){
    cout << "These are the readings of Temperatures at the factory.";
    for(size_t i = 0; i < tempReadings.size(); i++){
        cout << "Reading " << i+1 << ": " << tempReadings[i] << '\n';
    }
}

void minTempReadings(const vector<float>& tempReadings){
    float min = *min_element(tempReadings.begin(), tempReadings.end());
    cout << "Minimum Temperature is: " << min << '\n';
}

void maxTempReadings(const vector<float>& tempReadings){
    float max = *max_element(tempReadings.begin(), tempReadings.end());
    cout << "Maximum Temperature is: " << max << '\n';
}

void averageTempReadings(const vector<float>& tempReadings){
    float sum = accumulate(tempReadings.begin(), tempReadings.end(), 0.0);
    float size = tempReadings.size();
    float average = sum / size;
    cout << "Average Temperature is: " << average << '\n';
}

void checkAlarm(const vector<float>& tempReadings){
    for(size_t i = 0; i < tempReadings.size(); i++){
        if(tempReadings[i] > 70.0){
            cout << tempReadings[i] << " is above the required temp for the factory. Please reduce temp.\n";
        } else{
            cout << tempReadings[i] << " is within the safe range.\n";
        }
    }
}

void displayMenu(){
    cout << "***********************************************\n";
    cout << "TEMPERATURE MONITORING SYSTEM\n";
    cout << "***********************************************\n";
    cout << "1. Add temperature reading" << endl;
    cout << "2. Show all readings" << endl;
    cout << "3. Show highest temperature" << endl;
    cout << "4. Show lowest temperature" << endl;
    cout << "5. Show average temperature" << endl;
    cout << "6. Check alarm status" << endl;
    cout << "7. Exit" << endl;
}

int main(){
    // Temperature Monitoring System
    // This is a simple implementation of a temperature monitoring system

    vector<float> tempReadings;
    int choice;

    do{
        displayMenu();
        cin >> choice;

        if(choice < 1 || choice > 7){
            cout << "Invalid choice! Please try again.\n";
            continue;
        }

        if(tempReadings.empty() && choice != 1){
            cout << "No temperature readings is avaliable yet! Please add a new reading \n";
            addTemp(tempReadings);
        }
        switch(choice){
            case 1:
                addTemp(tempReadings);
                break;
            case 2:
                showTempReadings(tempReadings);
                break;
            case 3:
                maxTempReadings(tempReadings);
                break;
            case 4:
                minTempReadings(tempReadings);
                break;
            case 5:
                averageTempReadings(tempReadings);
                break;
            case 6:
                checkAlarm(tempReadings);
                break;
            case 7:
                cout << "Exiting the Machine now. Goodbye!";
                break;
            default:
                cout << "Invalid choice!, Please try again.";

        }

    }
    while(choice != 7);

    return 0;
}