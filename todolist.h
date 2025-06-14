#ifndef TODOLIST_H
#define TODOLIST_H

#include <string>
#include <vector>
#include "task.h"
using namespace std;

class toDoList {
    private:
        vector<Task> tasks;

    public:

        void addTask(const string& title);
        void removeTask(int index);
        void markTaskDone(int index);
        void listTasks() const;
};

#endif