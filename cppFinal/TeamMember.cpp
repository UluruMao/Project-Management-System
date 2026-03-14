
#include "TeamMember.hpp"
#include <iostream>
#include <string>

using namespace std;

TeamMember::TeamMember() {}

TeamMember::TeamMember(const string& name, const string& role,
                       const string& contact, const string& project)
        : Person(name, contact), role(role), project(project) {}

void TeamMember::setRole(const string& role) { this->role = role; }
void TeamMember::setProject(const string& project) { this->project = project; }

string TeamMember::getRole() const { return role; }
string TeamMember::getProject() const { return project; }

void TeamMember::display() const {
    cout << "Team Member - ";
    Person::display();
    cout << "Role: " << role << "\nAssigned Project: " << project << "\n";
}
