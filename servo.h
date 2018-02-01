#ifndef SERVO_H
#define SERVO_H


class Servo {
    
    int id;
    int position;

    public:
    int getPosition();
    void setPosition();
    int getId();

};

#endif