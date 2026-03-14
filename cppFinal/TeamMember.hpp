
#ifndef CPPFINALPROJECT_TEAMMEMBER_HPP
#define CPPFINALPROJECT_TEAMMEMBER_HPP

#include "Person.hpp"
#include <string>

class TeamMember : public Person {
private:
    std::string role;
    std::string project;

public:
    TeamMember();
    TeamMember(const std::string& name, const std::string& role,
               const std::string& contact, const std::string& project);

    void setRole(const std::string& role);
    void setProject(const std::string& project);

    std::string getRole() const;
    std::string getProject() const;

    std::string getContact() const { return contactInfo; }

    void display() const override;
};

#endif //CPPFINALPROJECT_TEAMMEMBER_HPP
