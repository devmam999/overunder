#include "main.h"

void setHang(int power) {
    hang = power;
}

int hangPower = 0;

void setHangMotor() {
    if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R1)) {
        hangPower = 127;
    }
    else if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
        hangPower = -127;
    }
    else {
        hangPower = 0;
    }
    setHang(hangPower);
}