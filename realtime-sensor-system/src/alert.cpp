#include "alert.h"
#include "sensor.h"
#include <iostream>

void checkAlert() {
    if (getTemp() > 70) {
        std::cout << "ALERT: High Temperature!" << std::endl;
    }
}
