
#include "FileManager.hpp"
#include <fstream>
#include <sstream>
using namespace std;

// PROJECTS
void FileManager::saveProjects(const vector<Project>& projects, const string& filename) {
    ofstream out(filename);
    for (const auto& p : projects) {
        out << p.getName() << "," << p.getDescription() << ","
            << p.getStartDate() << "," << p.getEndDate() << ","
            << p.getStatus() << "\n";
    }
}

vector<Project> FileManager::loadProjects(const string& filename) {
    ifstream in(filename);
    vector<Project> projects;
    string line, name, desc, start, end, status;

    while (getline(in, line)) {
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, desc, ',');
        getline(ss, start, ',');
        getline(ss, end, ',');
        getline(ss, status);
        projects.emplace_back(name, desc, start, end, status);
    }

    return projects;
}

// TASKS
void FileManager::saveTasks(const vector<Task>& tasks, const string& filename) {
    ofstream out(filename);
    for (const auto& t : tasks) {
        out << t.getName() << "," << t.getStatus() << "," << t.getStartDate() << ","
            << t.getEndDate() << "," << t.getParentProject() << "," << t.getDescription() << "\n";
    }
}

vector<Task> FileManager::loadTasks(const string& filename) {
    ifstream in(filename);
    vector<Task> tasks;
    string line, name, status, start, end, project, desc;

    while (getline(in, line)) {
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, status, ',');
        getline(ss, start, ',');
        getline(ss, end, ',');
        getline(ss, project, ',');
        getline(ss, desc);
        tasks.emplace_back(name, desc, start, end, status, project);
    }

    return tasks;
}

// TEAM MEMBERS
void FileManager::saveTeamMembers(const vector<TeamMember>& members, const string& filename) {
    ofstream out(filename);
    for (const auto& tm : members) {
        out << tm.getName() << "," << tm.getRole() << ","
            << tm.getContact() << "," << tm.getProject() << "\n";
    }
}

vector<TeamMember> FileManager::loadTeamMembers(const string& filename) {
    ifstream in(filename);
    vector<TeamMember> members;
    string line, name, role, contact, project;

    while (getline(in, line)) {
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, role, ',');
        getline(ss, contact, ',');
        getline(ss, project);
        members.emplace_back(name, role, contact, project);
    }

    return members;
}
