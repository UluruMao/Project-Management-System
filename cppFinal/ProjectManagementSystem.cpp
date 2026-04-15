
#include "ProjectManagementSystem.hpp"
#include "FileManager.hpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// ========== PROJECT ==========



void ProjectManagementSystem::addProject(const Project& p) {
    // Use the project name as the key and the project object as the value.
    projects[p.getName()] = p;
}

void ProjectManagementSystem::updateProject(const string& name, const Project& updated) {
    auto it = projects.find(name); //
    if (it != projects.end()) {
        // If the user changes the project name during the update
        if (name != updated.getName()) {
            projects.erase(it); // Delete old key-value pairs
            projects[updated.getName()] = updated; // Insert new key-value pair
        } else {
            it->second = updated; // Name remains unchanged, update Value
        }
    } else {
        cout << "Project not found!\n";
    }
}

void ProjectManagementSystem::deleteProject(const string& name) {
    projects.erase(name);
}

// ========== TASK ==========

void ProjectManagementSystem::addTask(const Task& t) {
    tasks.push_back(t);
}

void ProjectManagementSystem::updateTask(const string& name, const Task& updated) {
    for (auto& t : tasks) {
        if (t.getName() == name) {
            t = updated;
            return;
        }
    }
}

void ProjectManagementSystem::deleteTask(const string& name) {
    tasks.erase(remove_if(tasks.begin(), tasks.end(),
                          [&](const Task& t) { return t.getName() == name; }),
                tasks.end());
}

// ========== TEAM MEMBER ==========

void ProjectManagementSystem::addTeamMember(const TeamMember& tm) {
    teamMembers.push_back(tm);
}

void ProjectManagementSystem::updateTeamMember(const string& name, const TeamMember& updated) {
    for (auto& tm : teamMembers) {
        if (tm.getName() == name) {
            tm = updated;
            return;
        }
    }
}

void ProjectManagementSystem::deleteTeamMember(const string& name) {
    teamMembers.erase(remove_if(teamMembers.begin(), teamMembers.end(),
                                [&](const TeamMember& tm) { return tm.getName() == name; }),
                      teamMembers.end());
}

void ProjectManagementSystem::displayTasksForProject(const string& projectName) const {
    for (const auto& t : tasks) {
        if (t.getParentProject() == projectName) {
            t.display();
        }
    }
}

void ProjectManagementSystem::searchTasksByStatus(const string& status) const {
    cout << "Tasks with status [" << status << "]:\n";
    for (const auto& t : tasks) {
        if (t.getStatus() == status) {
            t.display();
        }
    }
}

// ========== VENDOR ==========

void ProjectManagementSystem::addVendor(const Vendor& v) {
    vendors.push_back(v);
}

void ProjectManagementSystem::updateVendor(const string& name, const Vendor& updated) {
    for (auto& v : vendors) {
        if (v.getCompanyName() == name) {
            v = updated;
            return;
        }
    }
}

void ProjectManagementSystem::deleteVendor(const string& name) {
    vendors.erase(remove_if(vendors.begin(), vendors.end(),
                            [&](const Vendor& v) { return v.getCompanyName() == name; }),
                  vendors.end());
}

// ========== CLIENT ==========

void ProjectManagementSystem::addClient(const Client& c) {
    clients.push_back(c);
}

void ProjectManagementSystem::updateClient(const string& name, const Client& updated) {
    for (auto& c : clients) {
        if (c.getCompanyName() == name) {
            c = updated;
            return;
        }
    }
}

void ProjectManagementSystem::deleteClient(const string& name) {
    clients.erase(remove_if(clients.begin(), clients.end(),
                            [&](const Client& c) { return c.getCompanyName() == name; }),
                  clients.end());
}

// ========== DISPLAY ==========

void ProjectManagementSystem::displayAllProjects() const {

    for (const auto& pair : projects) {
        pair.second.display();
    }
}

void ProjectManagementSystem::displayAllTasks() const {
    for (const auto& t : tasks) t.display();
}

void ProjectManagementSystem::displayAllTeamMembers() const {
    for (const auto& tm : teamMembers) tm.display();
}

// ========== TASK ASSIGNMENT ==========

void ProjectManagementSystem::assignTaskToMember(const string& taskName, const string& memberName) {
    cout << "Assigning task '" << taskName << "' to member '" << memberName << "'\n";
    // Placeholder: You can build a map<Task,Member> in extended logic
}

void ProjectManagementSystem::updateTaskStatus(const string& taskName, const string& newStatus) {
    for (auto& t : tasks) {
        if (t.getName() == taskName) {
            t.setStatus(newStatus);
            cout << "Updated task '" << taskName << "' to status: " << newStatus << "\n";
            return;
        }
    }
}

// ========== STATUS OPTIONS ==========

void ProjectManagementSystem::showStatusOptions() {
    cout << "Status Options:\n";
    cout << "  - Not Started\n  - In Progress\n  - Completed\n";
}

// ========== SAVE & LOAD ==========

void ProjectManagementSystem::saveAll() {
    // Convert the map to a vector and pass it to the existing FileManager.
    std::vector<Project> tempProjects;
    for (const auto& pair : projects) {
        tempProjects.push_back(pair.second);
    }
    FileManager::saveProjects(tempProjects, projectFile);

    FileManager::saveTasks(tasks, taskFile);
    FileManager::saveTeamMembers(teamMembers, teamFile);
}

void ProjectManagementSystem::loadAll() {
    projects.clear(); // Clear current memory data

    // Read the vector from FileManager and then load each element into the map.
    std::vector<Project> loadedProjects = FileManager::loadProjects(projectFile);
    for (const auto& p : loadedProjects) {
        projects[p.getName()] = p;
    }

    tasks = FileManager::loadTasks(taskFile);
    teamMembers = FileManager::loadTeamMembers(teamFile);
}


// Show all vendors.
void ProjectManagementSystem::displayAllVendors() const {
    if (vendors.empty()) {
        std::cout << "No vendors available.\n";
        return;
    }

    std::cout << "\n All Vendors:\n";
    for (const auto& v : vendors) {
        v.display();
        std::cout << "-----------------------------\n";
    }
}

// Display all clients.
void ProjectManagementSystem::displayAllClients() const {
    if (clients.empty()) {
        std::cout << "No clients available.\n";
        return;
    }

    std::cout << "\n All Clients:\n";
    for (const auto& c : clients) {
        c.display();
        std::cout << "-----------------------------\n";
    }
}
