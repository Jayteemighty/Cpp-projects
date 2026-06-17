#include <iostream>
using namespace std;

// Traffic Light Controller
// This program simulates a traffic light controller for an intersection.

enum TrafficLight{
        RED,
        GREEN,
        YELLOW,
    };

void displayTrafficLight(const TrafficLight &light){
    switch (light){
        case RED:
            cout << "Current Light: RED\n";
            cout << "STOP!\n";
            break;
        case GREEN:
            cout << "Current Light: GREEN\n";
            cout << "GO!\n";
            break;
        case YELLOW:
            cout << "Current Light: YELLOW\n";
            cout << "SLOW DOWN!\n";
            break;
    }
}

void changeTrafficLight(const TrafficLight &light){
    switch (light){
        case RED:
            light = GREEN;
            break;
        case GREEN:
            light = YELLOW;
            break;
        case YELLOW:
            light = RED;
            break;
    }
}

void showMenu(){
    cout << "**************Traffic Light Controller Menu:***************\n";
    cout << "1. Display current traffic light\n";
    cout << "2. Change traffic light\n";
    cout << "3. Exit\n";
    cout << "**********************************************************\n";
    cout << "Enter your choice: ";
    
}
int main(){
    TrafficLight light = RED;
    int choice;

    do{
        showMenu();
        cin >> choice;

        switch(choice){
            case 1:
                displayTrafficLight(light);
                break;
            case 2:
                changeTrafficLight(light);
                displayTrafficLight(light);
                break;
            case 3:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }while(choice != 3);

    return 0;
}