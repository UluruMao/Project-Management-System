
#include "Vendor.hpp"
#include <iostream>

using namespace std;

Vendor::Vendor() {}

Vendor::Vendor(const string& companyName, const string& companyType, const string& contactPerson)
        : companyName(companyName), companyType(companyType), contactPerson(contactPerson) {}

void Vendor::setCompanyName(const string& name) { companyName = name; }
void Vendor::setCompanyType(const string& type) { companyType = type; }
void Vendor::setContactPerson(const string& contact) { contactPerson = contact; }

string Vendor::getCompanyName() const { return companyName; }
string Vendor::getCompanyType() const { return companyType; }
string Vendor::getContactPerson() const { return contactPerson; }

void Vendor::display() const {
    cout << "Vendor: " << companyName << " (" << companyType << ")\n"
         << "  Contact: " << contactPerson << "\n";
}
