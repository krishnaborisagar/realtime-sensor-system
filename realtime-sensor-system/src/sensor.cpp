#include "sensor.h"
#include <iostream>
#include <cstdlib>

int currentTemp = 0;

void readSensor() {
    currentTemp = rand() % 100;
    std::cout << "Sensor Temp: " << currentTemp << std::endl;
}

int getTemp() {
    return currentTemp;
}
