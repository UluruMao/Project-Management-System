
#ifndef CPPFINALPROJECT_VENDOR_HPP
#define CPPFINALPROJECT_VENDOR_HPP
#include <string>

class Vendor {
private:
    std::string companyName;
    std::string companyType;
    std::string contactPerson;

public:
    Vendor();
    Vendor(const std::string& companyName, const std::string& companyType, const std::string& contactPerson);

    void setCompanyName(const std::string& name);
    void setCompanyType(const std::string& type);
    void setContactPerson(const std::string& contact);

    std::string getCompanyName() const;
    std::string getCompanyType() const;
    std::string getContactPerson() const;

    void display() const;
};
#endif //CPPFINALPROJECT_VENDOR_HPP
