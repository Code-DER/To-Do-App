#include "task.h"
using namespace std;

Task::Task(string t) {
    title = t;
    isDone = false;
}

void Task::markDone() {
    isDone = true;
}

bool Task::getStatus() const {
    return isDone;
}

string Task::getTitle() const {
    return title;
}