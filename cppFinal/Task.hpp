
#ifndef CPPFINALPROJECT_TASK_HPP
#define CPPFINALPROJECT_TASK_HPP
#include <string>
#include <vector>

class Task {
private:
    std::string name;
    std::string description;
    std::string startDate;
    std::string endDate;
    std::string status;
    std::string parentProject;
    std::vector<Task> subTasks;

public:

    Task();
    Task(const std::string& name, const std::string& description,
         const std::string& startDate, const std::string& endDate,
         const std::string& status, const std::string& parentProject);

    void setName(const std::string& name);
    void setDescription(const std::string& description);
    void setStartDate(const std::string& startDate);
    void setEndDate(const std::string& endDate);
    void setStatus(const std::string& status);
    void setParentProject(const std::string& project);

    void addSubTask(const Task& subtask);
    std::vector<Task> getSubTasks() const;

    std::string getName() const;
    std::string getStatus() const;
    std::string getParentProject() const;
    std::string getStartDate() const { return startDate; }
    std::string getEndDate() const { return endDate; }
    std::string getDescription() const { return description; }

    void display(int indentLevel = 0) const;
};
#endif //CPPFINALPROJECT_TASK_HPP
