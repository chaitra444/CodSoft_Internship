#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to represent a task
struct Task {
    string description;
    bool completed;
};

// Vector to store tasks
vector<Task> taskList;

// Function to add a task to the list
void addTask() {
    Task newTask;
    cout << "Enter task description: ";
    getline(cin, newTask.description);
    newTask.completed = false;
    taskList.push_back(newTask);
    cout << "Task added successfully!" << endl;
}

// Function to view tasks
void viewTasks() {
    cout << "Task List:" << endl;
    for (int i = 0; i < taskList.size(); i++) {
        cout << "[" << (i + 1) << "] " << taskList[i].description;
        if (taskList[i].completed) {
            cout << " (Completed)" << endl;
        } else {
            cout << " (Pending)" << endl;
        }
    }
}

// Function to mark a task as completed
void markTaskAsCompleted() {
    int taskNumber;
    cout << "Enter the task number to mark as completed: ";
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= taskList.size()) {
        taskList[taskNumber - 1].completed = true;
        cout << "Task marked as completed!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

// Function to remove a task from the list
void removeTask() {
    int taskNumber;
    cout << "Enter the task number to remove: ";
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= taskList.size()) {
        taskList.erase(taskList.begin() + taskNumber - 1);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task number!" << endl;
    }
}

int main() {
    int choice;

    while (true) {
        cout << "To-Do List Manager" << endl;
        cout << "-----------------" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Mark Task as Completed" << endl;
        cout << "4. Remove Task" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                markTaskAsCompleted();
                break;
            case 4:
                removeTask();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

/*
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 1 task1(simple_calculator)
Enter task description: Task added successfully!
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 1 task2(tic_tac_toe)
Enter task description: Task added successfully!
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 1 task3(to do list)
Enter task description: Task added successfully!
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 2
Task List:
[1]  task1(simple_calculator) (Pending)
[2]  task2(tic_tac_toe) (Pending)
[3]  task3(to do list) (Pending)
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 3
Enter the task number to mark as completed: 1
Task marked as completed!
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 2
Task List:
[1]  task1(simple_calculator) (Completed)
[2]  task2(tic_tac_toe) (Pending)
[3]  task3(to do list) (Pending)
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 4
Enter the task number to remove: 3
Task removed successfully!
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice: 2
Task List:
[1]  task1(simple_calculator) (Completed)
[2]  task2(tic_tac_toe) (Pending)
To-Do List Manager
-----------------
1. Add Task
2. View Tasks
3. Mark Task as Completed
4. Remove Task
5. Exit
Enter your choice:   */
