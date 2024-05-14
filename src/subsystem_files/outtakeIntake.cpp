#include "main.h"

void setouttakeIntake(int power) {
    outtakeIntake = power;
}

int intakePower = 0;
bool intakeOn = false;

void setIntakeMotor() {
     if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)) 
        intakeOn = !intakeOn;
    if (intakeOn && !controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2)) {
            intakePower = -127;
        }
        else {
            intakePower = 127;
        }
    }
    else if (!intakeOn && !controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) {
        intakePower = 0;
    }
    if (!intakeOn) {
        if (controller.get_digital(pros::E_CONTROLLER_DIGITAL_R2)) 
            intakePower = 127;
        else {
            intakePower = 0;
        }
    }
    setRollerIntake(intakePower);
}