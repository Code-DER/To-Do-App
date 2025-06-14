#include <iostream>
#include <string>
#include "task.h"
#include "todolist.h"
using namespace std;

int main() {

    toDoList To_Do_List;
    int choice;

    cout << "To-Do-List App" << endl;
    cout << "This is an OOP program made by me, Xander, to practice C++ OOP." << endl;

    do {
        cout << endl << "Choose a number from the following options:" << endl;
        cout << "[1] Add Task" << endl;
        cout << "[2] View Tasks" << endl;
        cout << "[3] Mark Task as Done" << endl;
        cout << "[4] Remove Task" << endl;
        cout << "[5] Exit" << endl;
        cout << "Your choice:";
        cin >> choice;

        cin.ignore();

        switch (choice) {
            case 1: {
                string title;
                cout << "Enter new task: ";
                getline(cin, title);
                To_Do_List.addTask(title);
                break;
            }
            case 2:
                To_Do_List.listTasks();
                break;
            case 3: {
                int TaskNum;
                cout << "Enter task number to be marked as done: ";
                cin >> TaskNum;
                To_Do_List.markTaskDone(TaskNum - 1);
                break;
            }
            case 4: {
                int TaskNum;
                cout << "Enter task number to be removed: ";
                cin >> TaskNum;
                To_Do_List.removeTask(TaskNum - 1);
                break;
            }
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    cout << "Thank you for using this program!" << endl;
    return 0;
}