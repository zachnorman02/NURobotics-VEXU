#include "main.h"

void setIntake(int power) {
    intake = power;
}

void setIntakeMotors() {
    int intakePower = 127 * (controller.get_digital(pros::E_CONTROLLER_DIGITAL_L1)
            - controller.get_digital(pros::E_CONTROLLER_DIGITAL_L2));
    setIntake(intakePower);
}