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
    cout << "=============================";
    cout << "MOTOR CONTROL SYSTEM";
    cout << "=============================";
    cout << "1. Start Motor";
    cout << "2. Stop Motor";
    cout << "3. Increase Speed";
    cout << "4. Decrease Speed";
    cout << "5. Change Direction";
    cout << "6. Emergency Stop";
    cout << "7. Show Status";
    cout << "8. Exit";
    cout << "";  
}

int main(){

    return 0;
}