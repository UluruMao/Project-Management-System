
#ifndef CPPFINALPROJECT_PROJECTMANAGEMENTSYSTEM_HPP
#define CPPFINALPROJECT_PROJECTMANAGEMENTSYSTEM_HPP

#include <vector>
#include <string>
#include "Project.hpp"
#include "Task.hpp"
#include "TeamMember.hpp"
#include "Vendor.hpp"
#include "Client.hpp"

class ProjectManagementSystem {
private:
    std::vector<Project> projects;
    std::vector<Task> tasks;
    std::vector<TeamMember> teamMembers;
    std::vector<Vendor> vendors;
    std::vector<Client> clients;

    const std::string projectFile = "projects.txt";
    const std::string taskFile = "tasks.txt";
    const std::string teamFile = "team.txt";

public:
    // Project
    void addProject(const Project& p);
    void updateProject(const std::string& name, const Project& updated);
    void deleteProject(const std::string& name);
    void displayAllVendors() const;
    void displayAllClients() const;



    // Task
    void addTask(const Task& t);
    void updateTask(const std::string& name, const Task& updated);
    void deleteTask(const std::string& name);
    void searchTasksByStatus(const std::string& status) const;
    void displayTasksForProject(const std::string& projectName) const;

    // Team Member
    void addTeamMember(const TeamMember& tm);
    void updateTeamMember(const std::string& name, const TeamMember& updated);
    void deleteTeamMember(const std::string& name);

    // Vendor
    void addVendor(const Vendor& v);
    void updateVendor(const std::string& name, const Vendor& updated);
    void deleteVendor(const std::string& name);

    // Client
    void addClient(const Client& c);
    void updateClient(const std::string& name, const Client& updated);
    void deleteClient(const std::string& name);

    // Display
    void displayAllProjects() const;
    void displayAllTasks() const;
    void displayAllTeamMembers() const;

    // Task Assignment
    void assignTaskToMember(const std::string& taskName, const std::string& memberName);
    void updateTaskStatus(const std::string& taskName, const std::string& newStatus);

    // Status Options
    static void showStatusOptions();

    // Save/Load
    void saveAll();
    void loadAll();
};

#endif //CPPFINALPROJECT_PROJECTMANAGEMENTSYSTEM_HPP
