
#include "Task.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

Task::Task() {}

Task::Task(const string& name, const string& description,
           const string& startDate, const string& endDate,
           const string& status, const string& parentProject)
        : name(name), description(description), startDate(startDate), endDate(endDate),
          status(status), parentProject(parentProject) {}

void Task::setName(const string& name) { this->name = name; }
void Task::setDescription(const string& description) { this->description = description; }
void Task::setStartDate(const string& startDate) { this->startDate = startDate; }
void Task::setEndDate(const string& endDate) { this->endDate = endDate; }
void Task::setStatus(const string& status) { this->status = status; }
void Task::setParentProject(const string& project) { this->parentProject = project; }

string Task::getName() const { return name; }
string Task::getStatus() const { return status; }
string Task::getParentProject() const { return parentProject; }

void Task::addSubTask(const Task& subtask) {
    subTasks.push_back(subtask);
}

vector<Task> Task::getSubTasks() const {
    return subTasks;
}

void Task::display(int indentLevel) const {
    string indent(indentLevel * 4, ' ');
    cout << indent << "Task: " << name << " [" << status << "]\n"
         << indent << "  Description: " << description << "\n"
         << indent << "  Start: " << startDate << ", End: " << endDate << "\n";
    for (const Task& sub : subTasks) {
        sub.display(indentLevel + 1);
    }
}
