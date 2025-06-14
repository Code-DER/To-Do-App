#ifndef TASK_H
#define TASK_H

#include <string>
using namespace std;

class Task {
    private:
        string title;
        bool isDone;
    public:
        // Constructor
        Task(string title);

        // Methods
        void markDone();
        bool getStatus() const;
        string getTitle() const;
};

#endif