#include <iostream>
#include <string>
#include <limits>
using namespace std;

enum class MotorState{
    OFF,
    ON
};

enum class MotorDirection{
    FORWARD,
    REVERSE
};

class Motor{
    private:
    MotorState state;
    MotorDirection direction;
    int speed;

    static constexpr int MIN_SPEED = 0;
    static constexpr int MAX_SPEED = 100;
    static constexpr int SPEED_STEP = 10;

    public:
    // Initial state
    Motor(): state(MotorState::OFF),
             direction(MotorDirection::FORWARD),
             speed(0){
                std::cout << "\nMotor initialized: OFF, Speed=0%, Direction=FORWARD\n";
             }
    
    void startMotor(){

    }

    void stopMotor(){

    }

    void increaseSpeed(){

    }

    void decreaseSpeed(){

    }

    void changeDirection(){

    }

    void emergencyStop(){

    }

    void showStatus(){

    }


};

void displayMenu(){
    cout << "=============================\n";
    cout << "MOTOR CONTROL SYSTEM\n";
    cout << "=============================\n";
    cout << "1. Start Motor\n";
    cout << "2. Stop Motor\n";
    cout << "3. Increase Speed\n";
    cout << "4. Decrease Speed\n";
    cout << "5. Change Direction\n";
    cout << "6. Emergency Stop\n";
    cout << "7. Show Status\n";
    cout << "8. Exit\n";
    cout << "=============================\n";
    cout << "Enter your choice: "; 
}

int main(){

    return 0;
}