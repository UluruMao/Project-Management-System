
#ifndef CPPFINALPROJECT_FILEMANAGER_HPP
#define CPPFINALPROJECT_FILEMANAGER_HPP

#include <vector>
#include <string>
#include "Project.hpp"
#include "Task.hpp"
#include "TeamMember.hpp"

class FileManager {
public:
    static void saveProjects(const std::vector<Project>& projects, const std::string& filename);
    static std::vector<Project> loadProjects(const std::string& filename);

    static void saveTasks(const std::vector<Task>& tasks, const std::string& filename);
    static std::vector<Task> loadTasks(const std::string& filename);

    static void saveTeamMembers(const std::vector<TeamMember>& members, const std::string& filename);
    static std::vector<TeamMember> loadTeamMembers(const std::string& filename);
};

#endif //CPPFINALPROJECT_FILEMANAGER_HPP
