#include "scheduler.h"
#include "sensor.h"
#include "alert.h"

int main() {
    Scheduler scheduler;

    scheduler.addTask(readSensor, 500);
    scheduler.addTask(checkAlert, 1000);

    scheduler.run();

    return 0;
}
