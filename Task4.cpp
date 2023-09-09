// TO-DO-LIST
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(string& description) {
        Task task;
        task.description = description;
        task.completed = false;
        tasks.push_back(task);
        cout << "Task '" << description << "' added.\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks found.\n";
            return;
        }

        cout << "Tasks:\n";
        for (double i = 0; i < tasks.size(); ++i) {
            cout << "[" << (tasks[i].completed ? "X" : " ") << "] " << tasks[i].description << "\n";
        }
    }

    void mark(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            tasks[index - 1].completed = true;
            cout << "Task '" << tasks[index - 1].description << "' marked as completed.\n";
        } 
        else
        {
            cout << "Invalid task index\n";
        }
    }

    void removeTask(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            cout << "Task '" << tasks[index - 1].description << "' removed successfully.\n";
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task index.\n";
        }
    }
};

int main() {
    TodoList todoList;
    string description; 

    while (true) {
        cout << "To-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore(); 
                cout << "Enter task description like '1shopping': ";
                cin.ignore();
                getline(cin, description);
                todoList.addTask(description);
                break;
            case 2:
                todoList.viewTasks();
                break;
            case 3:
                cout << "Enter the index of the task to mark as completed: ";
                int indexComplete;
                cin >> indexComplete;
                todoList.mark(indexComplete);
                break;
            case 4:
                cout << "Enter the index of the task to remove: ";
                int indexRemove;
                cin >> indexRemove;
                todoList.removeTask(indexRemove);
                break;
            case 5:
                cout << "Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice try again.\n";
        }
    }

    return 0;
}
