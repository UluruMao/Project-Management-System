#ifndef CPPFINALPROJECT_PROJECT_HPP
#define CPPFINALPROJECT_PROJECT_HPP
#include <string>

class Project {
private:
    std::string name;
    std::string description;
    std::string startDate;
    std::string endDate;
    std::string status;

public:
    Project();
    Project(const std::string& name, const std::string& description,
            const std::string& startDate, const std::string& endDate,
            const std::string& status);

    void setName(const std::string& name);
    void setDescription(const std::string& description);
    void setStartDate(const std::string& startDate);
    void setEndDate(const std::string& endDate);
    void setStatus(const std::string& status);

    std::string getName() const;
    std::string getDescription() const;
    std::string getStartDate() const;
    std::string getEndDate() const;
    std::string getStatus() const;

    void display() const;
};
#endif //CPPFINALPROJECT_PROJECT_HPP
