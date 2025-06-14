#include "todolist.h"
#include <iostream>

void toDoList::addTask(const string& title) {
    tasks.push_back(Task(title));
}

void toDoList::removeTask(int index) {
    if(index >= 0 && index < static_cast<int>(tasks.size())) {
        tasks.erase(tasks.begin() + index);
        cout << "Task Removed." << endl;
    } else {
        cout << "Invalid Task Number." << endl;
    }
}

void toDoList::markTaskDone(int index) {
    if(index >= 0 && index < static_cast<int>(tasks.size())) {
        tasks[index].markDone();
        cout << "Task marked as done." << endl;
    } else {
        cout << "Invalid Task Number." << endl;
    }
}

void toDoList::listTasks() const {
    if(tasks.empty()) {
        cout << "No tasks founds." << endl;
        return;
    }

    for(size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". [" << (tasks[i].getStatus() ? "x" : " ") << "] " << tasks[i].getTitle() << endl;
    }
}