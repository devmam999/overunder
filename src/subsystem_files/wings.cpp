#include "main.h"

bool wingsOn = false;

void setWings() {
    if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_Y)) {
        wingsOn = !wingsOn;
        wings.set_value(wingsOn);
    }
}