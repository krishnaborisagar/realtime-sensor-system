#include "scheduler.h"
#include <thread>
#include <chrono>

void Scheduler::addTask(std::function<void()> func, int interval) {
    tasks.push_back({func, interval});
}

void Scheduler::run() {
    while (true) {
        for (auto &task : tasks) {
            task.func();
            std::this_thread::sleep_for(std::chrono::milliseconds(task.interval));
        }
    }
}
