#include "main.h"

//Helper Functions
void setDrive(int left, int right) {
    driveLeft = left;
    driveRight = right;
}

//Arcade Control
void setDriveArcade() {
    int drive = controller.get_analog(ANALOG_RIGHT_X);
    int turn = controller.get_analog(ANALOG_LEFT_Y);
    if (abs(turn) < 5)
        turn = 0;
    if (abs(drive) < 5)
        drive = 0;
    int left = drive + turn;
    int right = drive - turn;
    setDrive(left, right);
}