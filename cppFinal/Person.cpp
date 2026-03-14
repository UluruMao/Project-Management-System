
#include "Person.hpp"
using namespace std;

Person::Person(const string& name, const string& contactInfo)
        : name(name), contactInfo(contactInfo) {}

void Person::display() const {
    cout << "Name: " << name << "\nContact: " << contactInfo << "\n";
}

string Person::getName() const {
    return name;
}
