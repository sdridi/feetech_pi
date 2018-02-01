#ifndef SERVO_MANAGER_H
#define SERVO_MANAGER_H

#include"servo.h"
#include <list>

class ServoManager {
    
    std::list<Servo> servoList;

    private:
    
    public:
        Servo getServo(int id);
        std::list<Servo> getServoList();

};

#endif