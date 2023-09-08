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
        cout << "Task '" << description << "' added successfully.\n";
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks found.\n";
            return;
        }

        cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << "[" << (tasks[i].completed ? "X" : " ") << "] " << tasks[i].description << "\n";
        }
    }

    void mark(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            tasks[index - 1].completed = true;
            cout << "Task '" << tasks[index - 1].description << "' marked as completed." << endl;
        } else {
            cout << "Invalid task index." << endl;
        }
    }

    void removeTask(int index) {
        if (index >= 1 && index <= static_cast<int>(tasks.size())) {
            cout << "Task '" << tasks[index - 1].description << "' removed successfully." << endl;
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    TodoList todoList;
    string description; 

    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore(); // Clear newline character from previous input
                cout << "Enter task description like '1shopping': ";
                cin.ignore(); // Clear newline character from previous input
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
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice try again." << endl;
        }
    }

    return 0;
}
