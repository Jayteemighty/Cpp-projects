#include <iostream>
#include <string>
#include <limits>

enum class MotorState {
    OFF,
    ON
};

enum class MotorDirection {
    FORWARD,
    REVERSE
};

class Motor {
private:
    MotorState state;
    MotorDirection direction;
    int speed;  // 0-100
    
    // Constants
    static constexpr int MIN_SPEED = 0;
    static constexpr int MAX_SPEED = 100;
    static constexpr int SPEED_STEP = 10;

public:
    Motor() : state(MotorState::OFF), 
              direction(MotorDirection::FORWARD), 
              speed(0) {
        std::cout << "\nMotor initialized: OFF, Speed=0%, Direction=FORWARD\n";
    }
    
    void startMotor() {
        if (state == MotorState::ON) {
            std::cout << "\nMotor is already running!\n";
            return;
        }
        
        state = MotorState::ON;
        std::cout << "\nMotor started successfully.\n";
        std::cout << "Current speed: 0% (Use option 3 to increase)\n";
    }
    
    void stopMotor() {
        if (state == MotorState::OFF) {
            std::cout << "\nMotor is already stopped!\n";
            return;
        }
        
        state = MotorState::OFF;
        speed = 0;
        std::cout << "\nMotor stopped. Speed set to 0%.\n";
    }
    
    void increaseSpeed() {
        if (state == MotorState::OFF) {
            std::cout << "\nERROR: Cannot increase speed. Motor is OFF.\n";
            std::cout << "Please start the motor first (Option 1).\n";
            return;
        }
        
        if (speed >= MAX_SPEED) {
            std::cout << "\nSpeed is already at maximum (" << MAX_SPEED << "%).\n";
            return;
        }
        
        speed += SPEED_STEP;
        if (speed > MAX_SPEED) speed = MAX_SPEED;
        std::cout << "\nSpeed increased to " << speed << "%.\n";
    }
    
    void decreaseSpeed() {
        if (state == MotorState::OFF) {
            std::cout << "\nERROR: Cannot decrease speed. Motor is OFF.\n";
            std::cout << "Please start the motor first (Option 1).\n";
            return;
        }
        
        if (speed <= MIN_SPEED) {
            std::cout << "\nSpeed is already at minimum (" << MIN_SPEED << "%).\n";
            return;
        }
        
        speed -= SPEED_STEP;
        if (speed < MIN_SPEED) speed = MIN_SPEED;
        std::cout << "\nSpeed decreased to " << speed << "%.\n";
    }
    
    void changeDirection() {
        if (state == MotorState::ON && speed > 0) {
            std::cout << "\nERROR: Cannot change direction while motor is moving!\n";
            std::cout << "Please stop the motor first (Option 2).\n";
            std::cout << "Current speed: " << speed << "%\n";
            return;
        }
        
        direction = (direction == MotorDirection::FORWARD) ? 
                    MotorDirection::REVERSE : MotorDirection::FORWARD;
        
        std::cout << "\nDirection changed to " 
                  << (direction == MotorDirection::FORWARD ? "FORWARD" : "REVERSE") << ".\n";
        
        if (state == MotorState::OFF) {
            std::cout << "Motor is currently OFF. Start it to begin moving.\n";
        } else {
            std::cout << "Motor is ON but speed is 0%. Increase speed to start moving.\n";
        }
    }
    
    void emergencyStop() {
        state = MotorState::OFF;
        speed = 0;
        std::cout << "\n!!! EMERGENCY STOP ACTIVATED !!!\n";
        std::cout << "Motor is OFF. Speed set to 0%.\n";
    }
    
    void showStatus() const {
        std::cout << "\n=======================================\n";
        std::cout << "         MOTOR STATUS\n";
        std::cout << "=======================================\n";
        std::cout << "State:      " << (state == MotorState::ON ? "ON" : "OFF") << "\n";
        std::cout << "Speed:      " << speed << "%\n";
        std::cout << "Direction:  " << (direction == MotorDirection::FORWARD ? "FORWARD" : "REVERSE") << "\n";
        
        if (state == MotorState::OFF) {
            std::cout << "Status:     Motor is stopped\n";
        } else if (speed == 0) {
            std::cout << "Status:     Motor is ON but not moving\n";
        } else {
            std::cout << "Status:     Motor is running " 
                      << (direction == MotorDirection::FORWARD ? "FORWARD" : "REVERSE")
                      << " at " << speed << "%\n";
        }
        std::cout << "=======================================\n";
    }
    
    MotorState getState() const { return state; }
    MotorDirection getDirection() const { return direction; }
    int getSpeed() const { return speed; }
};

void displayMenu() {
    std::cout << "\n=============================\n";
    std::cout << "   MOTOR CONTROL SYSTEM\n";
    std::cout << "=============================\n";
    std::cout << "1. Start Motor\n";
    std::cout << "2. Stop Motor\n";
    std::cout << "3. Increase Speed\n";
    std::cout << "4. Decrease Speed\n";
    std::cout << "5. Change Direction\n";
    std::cout << "6. Emergency Stop\n";
    std::cout << "7. Show Status\n";
    std::cout << "8. Exit\n";
    std::cout << "=============================\n";
    std::cout << "Enter your choice: ";
}

int getValidChoice() {
    int choice;
    std::cin >> choice;
    
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    return choice;
}

int main() {
    Motor motor;
    
    int choice;
    
    do {
        displayMenu();
        choice = getValidChoice();
        
        switch(choice) {
            case 1:
                motor.startMotor();
                break;
            case 2:
                motor.stopMotor();
                break;
            case 3:
                motor.increaseSpeed();
                break;
            case 4:
                motor.decreaseSpeed();
                break;
            case 5:
                motor.changeDirection();
                break;
            case 6:
                motor.emergencyStop();
                break;
            case 7:
                motor.showStatus();
                break;
            case 8:
                std::cout << "\nExiting Motor Control System...\n";
                break;
            default:
                std::cout << "\nInvalid choice! Please select 1-8.\n";
        }
    } while(choice != 8);
    
    return 0;
}