#ifndef ROBOT_CONTROL_H
#define ROBOT_CONTROL_H
#include <iostream>

class RobotControl {
public:
    static void startMotor() {
        std::cout << "[Hardware] Motor RUNNING! >>>" << std::endl;
    }
    static void stopMotor() {
        std::cout << "[Hardware] Motor STOPPED! |||" << std::endl;
    }
};
#endif