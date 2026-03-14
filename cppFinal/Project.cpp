
#include "Project.hpp"
#include <iostream>

using namespace std;

Project::Project() {}

Project::Project(const string& name, const string& description,
                 const string& startDate, const string& endDate,
                 const string& status)
        : name(name), description(description), startDate(startDate), endDate(endDate), status(status) {}

void Project::setName(const string& name) { this->name = name; }
void Project::setDescription(const string& description) { this->description = description; }
void Project::setStartDate(const string& startDate) { this->startDate = startDate; }
void Project::setEndDate(const string& endDate) { this->endDate = endDate; }
void Project::setStatus(const string& status) { this->status = status; }

string Project::getName() const { return name; }
string Project::getDescription() const { return description; }
string Project::getStartDate() const { return startDate; }
string Project::getEndDate() const { return endDate; }
string Project::getStatus() const { return status; }

void Project::display() const {
    cout << "Project: " << name << "\nDescription: " << description
         << "\nStart: " << startDate << ", End: " << endDate
         << "\nStatus: " << status << "\n";
}
