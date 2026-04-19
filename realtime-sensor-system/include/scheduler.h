#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include <functional>

struct Task {
    std::function<void()> func;
    int interval;
};

class Scheduler {
public:
    void addTask(std::function<void()> func, int interval);
    void run();

private:
    std::vector<Task> tasks;
};

#endif
