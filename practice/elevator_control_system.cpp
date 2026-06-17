#include <iostream>
using namespace std;

// Elevator Control System
// This is a simple implementation of an elevator control system

void moveElevator(int floor, int &currentFloor){
    cout << "Enter destination floor number: ";
    cin >> floor;

    if(floor > 4 || floor < 1){
        cout << "Invalid floor number! Please enter between 1 and 4.\n";
        return;
    }

    if (floor < currentFloor){
        cout << "Elevator moving down to floor " << floor << endl;
        currentFloor = floor;
    } else if (floor > currentFloor){
        cout << "Elevator moving up to floor " << floor << endl;
        currentFloor = floor;
    }
    else{
        cout << "Elevator is already on floor " << floor << endl;
    }
    
};

void showCurrentFloor(int &currentFloor){
    cout << "The elevator is currently on floor: " << currentFloor << '\n';
};

void showMenu(){
    cout << "*******************************************************\n";
    cout << "ELEVATOR CONTROL SYSTEM\n";
    cout << "*******************************************************\n";
    cout << "Welcome to the Elevator, what do you want to do?\n";
    cout << "1. Move to another floor.\n";
    cout << "2. Show the current floor.\n";
    cout << "3. Exit the Elevator.\n";
    cout << "Enter Choice: ";
};
// void openDoor(){};
// void closeDoor(){};
// void emergencyStop(){};
// void maintenanceMode(){};

int main(){
    int floor;
    int currentFloor = 1;
    int choice;

    
    do{
        showMenu();
        cin >> choice;

        switch(choice){
            case 1:
                moveElevator(floor, currentFloor);
                showCurrentFloor(currentFloor);
                break;
            case 2:
                showCurrentFloor(currentFloor);
                break;
            case 3:
                cout << "Exiting the Elevator now. Goodbye.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }while(choice != 3);


    return 0;
}