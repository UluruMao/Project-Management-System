
#ifndef CPPFINALPROJECT_CLIENT_HPP
#define CPPFINALPROJECT_CLIENT_HPP
#include <string>

class Client {
private:
    std::string companyName;
    std::string industry;
    std::string contactPerson;

public:
    Client();
    Client(const std::string& companyName, const std::string& industry, const std::string& contactPerson);

    void setCompanyName(const std::string& name);
    void setIndustry(const std::string& industry);
    void setContactPerson(const std::string& contact);

    std::string getCompanyName() const;
    std::string getIndustry() const;
    std::string getContactPerson() const;

    void display() const;
};

#endif //CPPFINALPROJECT_CLIENT_HPP
