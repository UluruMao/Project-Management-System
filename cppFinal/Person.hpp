
#ifndef CPPFINALPROJECT_PERSON_HPP
#define CPPFINALPROJECT_PERSON_HPP

#include <string>
#include <iostream>

class Person {
protected:
    std::string name;
    std::string contactInfo;

public:
    Person() = default;
    Person(const std::string& name, const std::string& contactInfo);

    virtual void display() const;
    virtual std::string getName() const;

    virtual ~Person() {}
};

#endif //CPPFINALPROJECT_PERSON_HPP
